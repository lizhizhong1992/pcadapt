################################################################################

context("CONVERT")

################################################################################

# Write a temporary file
N <- 150; P <- 400
mat <- matrix(0, N, P)
for (j in 1:P) mat[, j] <- rbinom(N, size = 2, prob = runif(1))
mat[sample(length(mat), size = length(mat) / 5)] <- 9  ## NAs
write.table(mat, tmpfile <- tempfile(), sep = " ", quote = FALSE,  
            row.names = FALSE, col.names = FALSE)

################################################################################

# Consider it is an LFMM file
bedfile <- writeBed(tmpfile, is.pcadapt = FALSE)
expect_equal(attr(bedfile, "n"), N)
expect_equal(attr(bedfile, "p"), P)
expect_message(writeBed(tmpfile, is.pcadapt = FALSE), 
               "The bed file already exists. Returning..", fixed = TRUE)

################################################################################

# Consider it is a PCADAPT file
file.copy(tmpfile, tmpfile2 <- tempfile())
expect_warning(bedfile2 <- writeBed(tmpfile2, is.pcadapt = TRUE),
               "Are you sure of the type of your file?", fixed = TRUE)
expect_equal(attr(bedfile2, "n"), P)
expect_equal(attr(bedfile2, "p"), N)

################################################################################

# Access the bedfile as a matrix
matNA <- ifelse(mat == 9, NA, mat)
expect_equal(bed2matrix(bedfile2), t(matNA))
expect_equal(bed2matrix(bedfile), matNA)

################################################################################
