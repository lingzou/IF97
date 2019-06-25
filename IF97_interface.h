#ifndef IF97_INTERFACE_H
#define IF97_INTERFACE_H

extern "C"
{
/***************************************************************
 * Saturation line
 ***************************************************************/
double T_sat_from_p(double p);
double p_sat_from_T(double T);

// Saturation properties by T
double v_l_sat_from_T(double T);
double rho_l_sat_from_T(double T);
double e_l_sat_from_T(double T);
double h_l_sat_from_T(double T);
double s_l_sat_from_T(double T);
double cv_l_sat_from_T(double T);
double cp_l_sat_from_T(double T);
double c_l_sat_from_T(double T);
double k_l_sat_from_T(double T);
double mu_l_sat_from_T(double T);
void liquid_sat_properties_from_T(double T, double * p, double * v, double * rho, double * e, double * h,
                                  double * s, double * cv, double * cp, double * c, double * k, double * mu);

double v_g_sat_from_T(double T);
double rho_g_sat_from_T(double T);
double e_g_sat_from_T(double T);
double h_g_sat_from_T(double T);
double s_g_sat_from_T(double T);
double cv_g_sat_from_T(double T);
double cp_g_sat_from_T(double T);
double c_g_sat_from_T(double T);
double k_g_sat_from_T(double T);
double mu_g_sat_from_T(double T);
void vapor_sat_properties_from_T(double T, double * p, double * v, double * rho, double * e, double * h,
                                  double * s, double * cv, double * cp, double * c, double * k, double * mu);

// Saturation properties by p
double v_l_sat_from_p(double p);
double rho_l_sat_from_p(double p);
double e_l_sat_from_p(double p);
double h_l_sat_from_p(double p);
double s_l_sat_from_p(double p);
double cv_l_sat_from_p(double p);
double cp_l_sat_from_p(double p);
double c_l_sat_from_p(double p);
double k_l_sat_from_p(double p);
double mu_l_sat_from_p(double p);
void liquid_sat_properties_from_p(double p, double * T, double * v, double * rho, double * e, double * h,
                                  double * s, double * cv, double * cp, double * c, double * k, double * mu);

double v_g_sat_from_p(double p);
double rho_g_sat_from_p(double p);
double e_g_sat_from_p(double p);
double h_g_sat_from_p(double p);
double s_g_sat_from_p(double p);
double cv_g_sat_from_p(double p);
double cp_g_sat_from_p(double p);
double c_g_sat_from_p(double p);
double k_g_sat_from_p(double p);
double mu_g_sat_from_p(double p);
void vapor_sat_properties_from_p(double p, double * T, double * v, double * rho, double * e, double * h,
                                  double * s, double * cv, double * cp, double * c, double * k, double * mu);

/***************************************************************
 * (p, T)-based properties
 ***************************************************************/
//static double (*v_from_pT_funcPtr[5])(double, double) = {R1_specific_volume, R2_specific_volume, R3_specific_volume_from_pT, NULL, R5_specific_volume};
double v_from_pT(double p, double T);
//static double (*rho_from_pT_funcPtr[5])(double, double) = {R1_rho_from_pT, R2_rho_from_pT, R3_rho_from_p_T_ITER, NULL, R5_rho_from_pT};
double rho_from_pT(double p, double T);
//static double (*e_from_pT_funcPtr[5])(double, double) = {R1_specific_int_energy, R2_rho_from_pT, R3_rho_from_p_T_ITER, NULL, R5_rho_from_pT};
double e_from_pT(double p, double T);
double h_from_pT(double p, double T);
double s_from_pT(double p, double T);
double cv_from_pT(double p, double T);
double cp_from_pT(double p, double T);
double c_from_pT(double p, double T);
double k_from_pT(double p, double T);
double mu_from_pT(double p, double T);

/***************************************************************
 * (p, h)-based properties
 ***************************************************************/
int locateRegion_from_ph(double p, double h);
double v_from_ph(double p, double h);
double rho_from_ph(double p, double h);
double e_from_ph(double p, double h);
double T_from_ph(double p, double h);
double s_from_ph(double p, double h);
double cv_from_ph(double p, double h);
double cp_from_ph(double p, double h);
double c_from_ph(double p, double h);
double k_from_ph(double p, double h);
double mu_from_ph(double p, double h);

/***************************************************************
 * (p, s)-based properties
 ***************************************************************/
int locateRegion_from_ps(double p, double s);
double v_from_ps(double p, double s);
double rho_from_ps(double p, double s);
double e_from_ps(double p, double s);
double T_from_ps(double p, double s);
double h_from_ps(double p, double s);
double cv_from_ps(double p, double s);
double cp_from_ps(double p, double s);
double c_from_ps(double p, double s);
double k_from_ps(double p, double s);
double mu_from_ps(double p, double s);
}
#endif /*IF97_INTERFACE_H*/
