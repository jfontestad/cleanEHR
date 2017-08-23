// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// reallocateTime_
DataFrame reallocateTime_(DataFrame d, const float t_discharge, const float frequency);
RcppExport SEXP _cleanEHR_reallocateTime_(SEXP dSEXP, SEXP t_dischargeSEXP, SEXP frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type d(dSEXP);
    Rcpp::traits::input_parameter< const float >::type t_discharge(t_dischargeSEXP);
    Rcpp::traits::input_parameter< const float >::type frequency(frequencySEXP);
    rcpp_result_gen = Rcpp::wrap(reallocateTime_(d, t_discharge, frequency));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cleanEHR_reallocateTime_", (DL_FUNC) &_cleanEHR_reallocateTime_, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_cleanEHR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
