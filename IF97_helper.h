#ifndef IF97_HELPER_H
#define IF97_HELPER_H

#include "IF97.h"

extern "C"
{
const static double IF97_H_PMAX_TMIN = R1_specific_enthalpy(IF97_P_MAX, IF97_T_MIN);
const static double IF97_H_PMAX_T25 = R2_specific_enthalpy(IF97_P_MAX, IF97_T_25);
const static double IF97_H_PMID_T25 = R2_specific_enthalpy(IF97_P_MID, IF97_T_25);
const static double IF97_H_PMID_TMAX = R5_specific_enthalpy(IF97_P_MID, IF97_T_MAX);
const static double IF97_H_PMIN_TMAX = R5_specific_enthalpy(IF97_SAT_P_MIN, IF97_T_MAX);

const static double IF97_S_PMAX_T25 = R2_specific_entropy(IF97_P_MAX, IF97_T_25);
const static double IF97_S_PMID_T25 = R2_specific_entropy(IF97_P_MID, IF97_T_25);
const static double IF97_S_PMID_TMAX = R5_specific_entropy(IF97_P_MID, IF97_T_MAX);
const static double IF97_S_PMIN_TMAX = R5_specific_entropy(IF97_SAT_P_MIN, IF97_T_MAX);

const static double IF97_VMIN_GLOBAL = R1_specific_volume(IF97_P_MAX, IF97_T_MIN);
const static double IF97_V_SAT_LIQ_TMIN = R1_specific_volume(IF97_SAT_P_MIN, IF97_T_MIN);
const static double IF97_V_SAT_VAP_TMIN = R2_specific_volume(IF97_SAT_P_MIN, IF97_T_MIN);
const static double IF97_V_PMID_TMAX = R5_specific_volume(IF97_P_MID, IF97_T_MAX);
const static double IF97_H_SAT_LIQ_TMIN = R1_specific_enthalpy(IF97_SAT_P_MIN, IF97_T_MIN);
const static double IF97_H_SAT_VAP_TMIN = R2_specific_enthalpy(IF97_SAT_P_MIN, IF97_T_MIN);
const static double IF97_HMIN_GLOBAL = IF97_H_SAT_LIQ_TMIN;

const static double R3_T_list[51] =
{
  624.15, 625.15, 626.15, 627.15, 628.15,
  629.15, 630.15, 631.15, 632.15, 633.15,
  634.15, 635.15, 636.15, 637.15, 638.15,
  639.15, 640.15, 641.15, 642.15, 643.15,
  644.15, 645.15, 646.15,
  646.2, 646.25, 646.3, 646.35, 646.4,
  646.45, 646.5, 646.55, 646.6, 646.65,
  646.7, 646.75, 646.8, 646.85, 646.9,
  646.95, 647, 647.05,
  647.06, 647.07, 647.08, 647.09,
  647.091, 647.092, 647.093, 647.094, 647.095, 647.0955
};

// R3_rho_l_sat_guess and R3_rho_g_sat_guess are really not guessed, they are from
// NIST webbook: https://webbook.nist.gov/chemistry/fluid/
const static double R3_rho_l_sat_guess[51] =
{
  570.64, 566.46, 562.15, 557.72, 553.14, 548.41, 543.5, 538.41, 533.11, 527.59, 521.82, 515.79, 509.45, 502.78, 495.74, 488.27, 480.29,
  471.67, 462.18, 451.43, 438.64, 422.26, 398.68, 397.17, 395.62, 394.01, 392.34, 390.62, 388.82, 386.95, 384.99, 382.92, 380.74, 378.41,
  375.9, 373.16, 370.12, 366.66, 362.56, 357.34, 349.5, 347.18, 344.3, 340.39, 333.9, 332.95, 331.88, 330.65, 329.16, 327.16, 325.7
};

const static double R3_rho_g_sat_guess[51] =
{
  116.1, 118.68, 121.37, 124.17, 127.09, 130.14, 133.33, 136.67, 140.19, 143.9, 147.82, 151.99, 156.43, 161.2, 166.35, 171.95, 178.11,
  184.98, 192.77, 201.84, 212.79, 226.84, 247.22, 248.56, 249.94, 251.38, 252.88, 254.44, 256.08, 257.8, 259.62, 261.54, 263.6, 265.81,
  268.21, 270.86, 273.82, 277.22, 281.29, 286.51, 294.37, 296.68, 299.56, 303.46, 309.84, 310.83, 311.93, 313.2, 314.73, 316.79, 318.27
};

const static double R3_T_exact_list[53] =
{
  623.15, //0
  624.15, 625.15, 626.15, 627.15, 628.15, //1
  629.15, 630.15, 631.15, 632.15, 633.15, //6
  634.15, 635.15, 636.15, 637.15, 638.15, //11
  639.15, 640.15, 641.15, 642.15, 643.15, //16
  644.15, 645.15, 646.15, //21
  646.2,  646.25, 646.3,  646.35, 646.4, //24
  646.45, 646.5,  646.55, 646.6,  646.65, //29
  646.7,  646.75, 646.8,  646.85, 646.9, //34
  646.95, 647,    647.05, //39
  647.06, 647.07, 647.08, 647.09, //42
  647.091, 647.092, 647.093, 647.094, 647.095, 647.0955, //46
  647.096 //52
};

const static double R3_rho_l_sat_exact[53] =
{
  5.74689342e+02,
  5.70603997e+02, 5.66428405e+02, 5.62135469e+02, 5.57716025e+02, 5.53159698e+02,
  5.48454663e+02, 5.43587342e+02, 5.38542011e+02, 5.33300290e+02, 5.27840468e+02,
  5.22136599e+02, 5.16157253e+02, 5.09863761e+02, 5.03207675e+02, 4.96126981e+02,
  4.88540215e+02, 4.80336905e+02, 4.71361118e+02, 4.61380982e+02, 4.50026401e+02,
  4.36643025e+02, 4.19868762e+02, 3.95814944e+02,
  3.94230979e+02, 3.92587409e+02, 3.90878289e+02, 3.89096675e+02, 3.87234380e+02,
  3.85281644e+02, 3.83226690e+02, 3.81055101e+02, 3.78748936e+02, 3.76285425e+02,
  3.73634978e+02, 3.70758013e+02, 3.67599621e+02, 3.64079923e+02, 3.60074983e+02,
  3.55373644e+02, 3.49557840e+02, 3.41516717e+02,
  3.39363170e+02, 3.36850165e+02, 3.33739853e+02, 3.29276802e+02,
  3.28656441e+02, 3.27968735e+02, 3.27186306e+02, 3.26255779e+02, 3.25039314e+02, 3.24176509e+02,
  3.22000000e+02
};

const static double R3_rho_g_sat_exact[53] =
{
  1.13624331e+02,
  1.16110734e+02, 1.18703734e+02, 1.21398952e+02, 1.24204571e+02, 1.27129894e+02,
  1.30185565e+02, 1.33383846e+02, 1.36738983e+02, 1.40267672e+02, 1.43989686e+02,
  1.47928711e+02, 1.52113503e+02, 1.56579511e+02, 1.61371238e+02, 1.66545768e+02,
  1.72178262e+02, 1.78370920e+02, 1.85268514e+02, 1.93087412e+02, 2.02175602e+02,
  2.13155871e+02, 2.27351365e+02, 2.48680872e+02,
  2.50132371e+02, 2.51645312e+02, 2.53226102e+02, 2.54882246e+02, 2.56622621e+02,
  2.58457840e+02, 2.60400742e+02, 2.62467078e+02, 2.64676489e+02, 2.67053936e+02,
  2.69631872e+02, 2.72453689e+02, 2.75579473e+02, 2.79096298e+02, 2.83138402e+02,
  2.87932210e+02, 2.93919406e+02, 3.02249426e+02,
  3.04480025e+02, 3.07078049e+02, 3.10282204e+02, 3.14848984e+02,
  3.15480331e+02, 3.16179157e+02, 3.16972866e+02, 3.17914910e+02, 3.19143510e+02, 3.20013583e+02,
  3.22000000e+02
};

int locateRegion_from_pT(double p, double T);
unsigned int find_T_lower_bound(double T);

void genR3_sat_line();
void genR4_sat_line();

double R1_T_from_p_v_ITER(double p, double v);
double R2_T_from_p_v_ITER(double p, double v);

double R3_rho_l_sat_from_T_ITER(double T);
double R3_rho_g_sat_from_T_ITER(double T);

double R3_rho_from_p_T_ITER(double p, double T);
void R3_rho_T_x_from_p_h_ITER(double p, double h, double &rho, double &T, double &x);
void R3_rho_T_x_from_p_s_ITER(double p, double s, double &rho, double &T, double &x);
double R3_dp_ddelta(double delta, double tau);
double R3_T_from_p_v_ITER(double p, double v);

double R1_drho_dp(double p, double T);
double R2_drho_dp(double p, double T);

double R5_T_from_p_h_ITER(double p, double h);
double R5_T_from_p_s_ITER(double p, double s);
double R5_T_from_p_v_ITER(double p, double v);

double p_max_from_h(double h);
double h_max_from_v(double v);
double h_min_from_v(double v);

double p_max_from_s(double s);
}
#endif /*IF97_HELPER_H*/
