// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_af
NumericVector get_af(SEXP obj);
RcppExport SEXP _pcadapt_get_af(SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    rcpp_result_gen = Rcpp::wrap(get_af(obj));
    return rcpp_result_gen;
END_RCPP
}
// bedXPtr
SEXP bedXPtr(std::string path, int n, int p);
RcppExport SEXP _pcadapt_bedXPtr(SEXP pathSEXP, SEXP nSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(bedXPtr(path, n, p));
    return rcpp_result_gen;
END_RCPP
}
// clumping
LogicalVector clumping(SEXP obj, const IntegerVector& ind_col, const IntegerVector& ord, LogicalVector& remain, int size, double thr);
RcppExport SEXP _pcadapt_clumping(SEXP objSEXP, SEXP ind_colSEXP, SEXP ordSEXP, SEXP remainSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ord(ordSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type remain(remainSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(clumping(obj, ind_col, ord, remain, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// multLinReg
NumericMatrix multLinReg(SEXP obj, const IntegerVector& ind_col, const NumericVector& af, const NumericMatrix& u);
RcppExport SEXP _pcadapt_multLinReg(SEXP objSEXP, SEXP ind_colSEXP, SEXP afSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type af(afSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(multLinReg(obj, ind_col, af, u));
    return rcpp_result_gen;
END_RCPP
}
// nb_nona
ListOf<NumericVector> nb_nona(SEXP obj, const IntegerVector& ind_col);
RcppExport SEXP _pcadapt_nb_nona(SEXP objSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(nb_nona(obj, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// pMatVec4
NumericVector pMatVec4(SEXP obj, const IntegerVector& ind_col, const NumericVector& af, const NumericVector& x);
RcppExport SEXP _pcadapt_pMatVec4(SEXP objSEXP, SEXP ind_colSEXP, SEXP afSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type af(afSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(pMatVec4(obj, ind_col, af, x));
    return rcpp_result_gen;
END_RCPP
}
// cpMatVec4
NumericVector cpMatVec4(SEXP obj, const IntegerVector& ind_col, const NumericVector& af, const NumericVector& x);
RcppExport SEXP _pcadapt_cpMatVec4(SEXP objSEXP, SEXP ind_colSEXP, SEXP afSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type af(afSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpMatVec4(obj, ind_col, af, x));
    return rcpp_result_gen;
END_RCPP
}
// writebed
void writebed(const char * filename, Environment e, const RawVector& tab, bool is_pcadapt);
RcppExport SEXP _pcadapt_writebed(SEXP filenameSEXP, SEXP eSEXP, SEXP tabSEXP, SEXP is_pcadaptSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Environment >::type e(eSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< bool >::type is_pcadapt(is_pcadaptSEXP);
    writebed(filename, e, tab, is_pcadapt);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pcadapt_get_af", (DL_FUNC) &_pcadapt_get_af, 1},
    {"_pcadapt_bedXPtr", (DL_FUNC) &_pcadapt_bedXPtr, 3},
    {"_pcadapt_clumping", (DL_FUNC) &_pcadapt_clumping, 6},
    {"_pcadapt_multLinReg", (DL_FUNC) &_pcadapt_multLinReg, 4},
    {"_pcadapt_nb_nona", (DL_FUNC) &_pcadapt_nb_nona, 2},
    {"_pcadapt_pMatVec4", (DL_FUNC) &_pcadapt_pMatVec4, 4},
    {"_pcadapt_cpMatVec4", (DL_FUNC) &_pcadapt_cpMatVec4, 4},
    {"_pcadapt_writebed", (DL_FUNC) &_pcadapt_writebed, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_pcadapt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
