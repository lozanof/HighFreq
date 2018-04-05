// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// vari_ance
double vari_ance(NumericVector vec_tor);
RcppExport SEXP _HighFreq_vari_ance(SEXP vec_torSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec_tor(vec_torSEXP);
    rcpp_result_gen = Rcpp::wrap(vari_ance(vec_tor));
    return rcpp_result_gen;
END_RCPP
}
// roll_sum
NumericVector roll_sum(NumericVector vec_tor, int look_back);
RcppExport SEXP _HighFreq_roll_sum(SEXP vec_torSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec_tor(vec_torSEXP);
    Rcpp::traits::input_parameter< int >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_sum(vec_tor, look_back));
    return rcpp_result_gen;
END_RCPP
}
// roll_wsum
arma::vec roll_wsum(const arma::vec& vec_tor, const arma::vec& wei_ghts);
RcppExport SEXP _HighFreq_roll_wsum(SEXP vec_torSEXP, SEXP wei_ghtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vec_tor(vec_torSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type wei_ghts(wei_ghtsSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_wsum(vec_tor, wei_ghts));
    return rcpp_result_gen;
END_RCPP
}
// roll_var
NumericVector roll_var(NumericVector vec_tor, int look_back);
RcppExport SEXP _HighFreq_roll_var(SEXP vec_torSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec_tor(vec_torSEXP);
    Rcpp::traits::input_parameter< int >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var(vec_tor, look_back));
    return rcpp_result_gen;
END_RCPP
}
// inv_reg
arma::mat inv_reg(const arma::mat& re_turns, const arma::uword& max_eigen);
RcppExport SEXP _HighFreq_inv_reg(SEXP re_turnsSEXP, SEXP max_eigenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type re_turns(re_turnsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type max_eigen(max_eigenSEXP);
    rcpp_result_gen = Rcpp::wrap(inv_reg(re_turns, max_eigen));
    return rcpp_result_gen;
END_RCPP
}
// sim_garch
NumericMatrix sim_garch(double om_ega, double al_pha, double be_ta, NumericVector in_nov);
RcppExport SEXP _HighFreq_sim_garch(SEXP om_egaSEXP, SEXP al_phaSEXP, SEXP be_taSEXP, SEXP in_novSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type om_ega(om_egaSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    Rcpp::traits::input_parameter< double >::type be_ta(be_taSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type in_nov(in_novSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_garch(om_ega, al_pha, be_ta, in_nov));
    return rcpp_result_gen;
END_RCPP
}
// sim_ou
NumericVector sim_ou(double eq_price, double vol_at, double the_ta, NumericVector in_nov);
RcppExport SEXP _HighFreq_sim_ou(SEXP eq_priceSEXP, SEXP vol_atSEXP, SEXP the_taSEXP, SEXP in_novSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type eq_price(eq_priceSEXP);
    Rcpp::traits::input_parameter< double >::type vol_at(vol_atSEXP);
    Rcpp::traits::input_parameter< double >::type the_ta(the_taSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type in_nov(in_novSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_ou(eq_price, vol_at, the_ta, in_nov));
    return rcpp_result_gen;
END_RCPP
}
// sim_arima
arma::vec sim_arima(const arma::vec& in_nov, const arma::vec& co_eff);
RcppExport SEXP _HighFreq_sim_arima(SEXP in_novSEXP, SEXP co_effSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type in_nov(in_novSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type co_eff(co_effSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_arima(in_nov, co_eff));
    return rcpp_result_gen;
END_RCPP
}
// sharpe_weights_reg
arma::vec sharpe_weights_reg(const arma::mat& re_turns, const arma::vec alpha_s, const arma::vec alphas_b, const arma::uword& max_eigen);
RcppExport SEXP _HighFreq_sharpe_weights_reg(SEXP re_turnsSEXP, SEXP alpha_sSEXP, SEXP alphas_bSEXP, SEXP max_eigenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type re_turns(re_turnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type alphas_b(alphas_bSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type max_eigen(max_eigenSEXP);
    rcpp_result_gen = Rcpp::wrap(sharpe_weights_reg(re_turns, alpha_s, alphas_b, max_eigen));
    return rcpp_result_gen;
END_RCPP
}
// roll_portf
arma::mat roll_portf(const arma::mat& ex_cess, const arma::mat& re_turns, const arma::uvec& start_points, const arma::uvec& end_points, const double& al_pha, const arma::uword& max_eigen);
RcppExport SEXP _HighFreq_roll_portf(SEXP ex_cessSEXP, SEXP re_turnsSEXP, SEXP start_pointsSEXP, SEXP end_pointsSEXP, SEXP al_phaSEXP, SEXP max_eigenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type ex_cess(ex_cessSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type re_turns(re_turnsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type start_points(start_pointsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type end_points(end_pointsSEXP);
    Rcpp::traits::input_parameter< const double& >::type al_pha(al_phaSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type max_eigen(max_eigenSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_portf(ex_cess, re_turns, start_points, end_points, al_pha, max_eigen));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HighFreq_vari_ance", (DL_FUNC) &_HighFreq_vari_ance, 1},
    {"_HighFreq_roll_sum", (DL_FUNC) &_HighFreq_roll_sum, 2},
    {"_HighFreq_roll_wsum", (DL_FUNC) &_HighFreq_roll_wsum, 2},
    {"_HighFreq_roll_var", (DL_FUNC) &_HighFreq_roll_var, 2},
    {"_HighFreq_inv_reg", (DL_FUNC) &_HighFreq_inv_reg, 2},
    {"_HighFreq_sim_garch", (DL_FUNC) &_HighFreq_sim_garch, 4},
    {"_HighFreq_sim_ou", (DL_FUNC) &_HighFreq_sim_ou, 4},
    {"_HighFreq_sim_arima", (DL_FUNC) &_HighFreq_sim_arima, 2},
    {"_HighFreq_sharpe_weights_reg", (DL_FUNC) &_HighFreq_sharpe_weights_reg, 4},
    {"_HighFreq_roll_portf", (DL_FUNC) &_HighFreq_roll_portf, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_HighFreq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
