// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// diagQF
SEXP diagQF(const Eigen::Map<Eigen::MatrixXd> Z, const Eigen::Map<Eigen::VectorXd> w);
RcppExport SEXP _Probit_diagQF(SEXP ZSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(diagQF(Z, w));
    return rcpp_result_gen;
END_RCPP
}
// fastDet
SEXP fastDet(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _Probit_fastDet(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastDet(A));
    return rcpp_result_gen;
END_RCPP
}
// fastIP
SEXP fastIP(const Eigen::Map<Eigen::MatrixXd> A, const Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _Probit_fastIP(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(fastIP(A, B));
    return rcpp_result_gen;
END_RCPP
}
// fastInv
SEXP fastInv(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _Probit_fastInv(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastInv(A));
    return rcpp_result_gen;
END_RCPP
}
// fastMMp
SEXP fastMMp(const Eigen::Map<Eigen::MatrixXd> A, const Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _Probit_fastMMp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(fastMMp(A, B));
    return rcpp_result_gen;
END_RCPP
}
// tr
SEXP tr(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _Probit_tr(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(tr(A));
    return rcpp_result_gen;
END_RCPP
}
// fastT
SEXP fastT(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _Probit_fastT(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastT(A));
    return rcpp_result_gen;
END_RCPP
}
// fastQF
SEXP fastQF(const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _Probit_fastQF(SEXP XSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fastQF(X, A));
    return rcpp_result_gen;
END_RCPP
}
// SchurC
SEXP SchurC(const Eigen::Map<Eigen::MatrixXd> I11, const Eigen::Map<Eigen::MatrixXd> I22, const Eigen::Map<Eigen::MatrixXd> I12);
RcppExport SEXP _Probit_SchurC(SEXP I11SEXP, SEXP I22SEXP, SEXP I12SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type I11(I11SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type I22(I22SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type I12(I12SEXP);
    rcpp_result_gen = Rcpp::wrap(SchurC(I11, I22, I12));
    return rcpp_result_gen;
END_RCPP
}
// WLS
SEXP WLS(const Eigen::Map<Eigen::MatrixXd> Z, const Eigen::Map<Eigen::VectorXd> w, const Eigen::Map<Eigen::VectorXd> y);
RcppExport SEXP _Probit_WLS(SEXP ZSEXP, SEXP wSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type w(wSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(WLS(Z, w, y));
    return rcpp_result_gen;
END_RCPP
}
// OLS
SEXP OLS(const Eigen::Map<Eigen::MatrixXd> Z, const Eigen::Map<Eigen::VectorXd> y);
RcppExport SEXP _Probit_OLS(SEXP ZSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(OLS(Z, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Probit_diagQF", (DL_FUNC) &_Probit_diagQF, 2},
    {"_Probit_fastDet", (DL_FUNC) &_Probit_fastDet, 1},
    {"_Probit_fastIP", (DL_FUNC) &_Probit_fastIP, 2},
    {"_Probit_fastInv", (DL_FUNC) &_Probit_fastInv, 1},
    {"_Probit_fastMMp", (DL_FUNC) &_Probit_fastMMp, 2},
    {"_Probit_tr", (DL_FUNC) &_Probit_tr, 1},
    {"_Probit_fastT", (DL_FUNC) &_Probit_fastT, 1},
    {"_Probit_fastQF", (DL_FUNC) &_Probit_fastQF, 2},
    {"_Probit_SchurC", (DL_FUNC) &_Probit_SchurC, 3},
    {"_Probit_WLS", (DL_FUNC) &_Probit_WLS, 3},
    {"_Probit_OLS", (DL_FUNC) &_Probit_OLS, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_Probit(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
