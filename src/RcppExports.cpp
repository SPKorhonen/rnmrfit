// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// lineshape_1d
std::vector< std::complex<double> > lineshape_1d(const NumericVector x, const NumericMatrix par);
RcppExport SEXP _rnmrfit_lineshape_1d(SEXP xSEXP, SEXP parSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type par(parSEXP);
    rcpp_result_gen = Rcpp::wrap(lineshape_1d(x, par));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rnmrfit_lineshape_1d", (DL_FUNC) &_rnmrfit_lineshape_1d, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_rnmrfit(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
