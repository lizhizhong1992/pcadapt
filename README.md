# pcadapt
[![Build Status](https://travis-ci.org/bcm-uga/pcadapt.svg?branch=master)](https://travis-ci.org/bcm-uga/pcadapt)
[![AppVeyor build status](https://ci.appveyor.com/api/projects/status/github/bcm-uga/pcadapt?branch=master&svg=true)](https://ci.appveyor.com/project/bcm-uga/pcadapt)
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/pcadapt)](https://cran.r-project.org/package=pcadapt)
[![](http://cranlogs.r-pkg.org/badges/grand-total/pcadapt)](https://cran.r-project.org/package=pcadapt)
[![Coverage status](https://codecov.io/gh/bcm-uga/pcadapt/branch/master/graph/badge.svg)](https://codecov.io/github/bcm-uga/pcadapt?branch=master)

**pcadapt** has been developed to detect genetic markers involved in biological adaptation. **pcadapt** provides statistical tools for outlier detection based on Principal Component Analysis (PCA).

To run the package, you can install it from CRAN:

```
install.packages("pcadapt")
library(pcadapt)
```

A tutorial for **pcadapt** is available. To access to the vignette, type the following command in your `R` console:

```
browseVignettes("pcadapt")
```

If you desire to install from GitHub, run the following commands:

```
install.packages("devtools")
devtools::install_github("bcm-uga/pcadapt")
```


## References

- Luu, K., Bazin, E., & Blum, M. G.B. (2017). [pcadapt: an R package to perform genome scans for selection based on principal component analysis.](http://onlinelibrary.wiley.com/doi/10.1111/1755-0998.12592/full) Molecular Ecology Resources, 17(1), 67-77.

- Duforet-Frebourg, N., Luu, K., Laval, G., Bazin, E., & Blum, M. G.B. (2015). [Detecting genomic signatures of natural selection with principal component analysis: application to the 1000 Genomes data.](http://mbe.oxfordjournals.org/content/33/4/1082) Molecular biology and evolution, 33(4), 1082-1093.
