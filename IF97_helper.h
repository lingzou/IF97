#ifndef IF97_HELPER_H
#define IF97_HELPER_H

#include "IF97.h"
#include "IF97_interpolation.h"

struct IF97_Interpolation;

const static double R3_T_list[54] =
{
  624.15,   625.15,   626.15,   627.15,   628.15,
  629.15,   630.15,   631.15,   632.15,   633.15,
  634.15,   635.15,   636.15,   637.15,   638.15,
  639.15,   640.15,   640.65,   641.15,   641.65,
  642.15,   642.65,   643.15,   643.65,   644.15,
  644.65,   645.15,   645.65,   646.15,   646.45,   646.65,
  646.75,   646.85,   646.90,   646.95,   646.98,   647.00,   647.01,
  647.02,   647.03,   647.04,   647.05,   647.06,
  647.07,   647.08,   647.085,  647.088,  647.09,   647.091,  647.092,
  647.093,  647.094,  647.095,  647.0955
  //647.096
};

// R3_rho_l_sat_guess and R3_rho_g_sat_guess are really not guessed, they are from
// NIST webbook: https://webbook.nist.gov/chemistry/fluid/
const static double R3_rho_l_sat_guess[54] =
{
  570.64, 566.46, 562.15, 557.72, 553.14,
  548.41, 543.50, 538.41, 533.11, 527.59,
  521.82, 515.79, 509.45, 502.78, 495.74,
  488.27, 480.29, 476.07, 471.67, 467.06,
  462.18, 457.00, 451.43, 445.36, 438.64,
  431.05, 422.26, 411.76, 398.68, 388.82, 380.74,
  375.90, 370.12, 366.66, 362.56, 359.62, 357.34, 356.07,
  354.69, 353.17, 351.46, 349.50, 347.18,
  344.30, 340.39, 337.68, 335.62, 333.90, 332.95, 331.88,
  330.65, 329.16, 327.16, 325.70
};

const static double R3_rho_g_sat_guess[54] =
{
  116.10, 118.68, 121.37, 124.17, 127.09,
  130.14, 133.33, 136.67, 140.19, 143.90,
  147.82, 151.99, 156.43, 161.20, 166.35,
  171.95, 178.11, 181.44, 184.98, 188.74,
  192.77, 197.12, 201.84, 207.02, 212.79,
  219.31, 226.84, 235.84, 247.22, 256.08, 263.60,
  268.21, 273.82, 277.22, 281.29, 284.23, 286.51, 287.78,
  289.17, 290.69, 292.41, 294.37, 296.68,
  299.56, 303.46, 306.16, 308.22, 309.84, 310.83, 311.93,
  313.20, 314.73, 316.79, 318.27
};

int findRegion(double p, double T);
void genR3_sat_line();
void genR4_sat_line();
double R3_rho_from_p_T_ITER(double p, double T);
void R3_T_x_from_p_h_ITER(double p, double h, double &T, double &x);
void R3_T_x_from_p_s_ITER(double p, double s, double &T, double &x);
double R3_dp_ddelta(double delta, double tau);

double R1_drho_dp(double p, double T);
double R2_drho_dp(double p, double T);

double R5_T_from_p_h_ITER(double p, double h);
double R5_T_from_p_s_ITER(double p, double s);

#endif /*IF97_HELPER_H*/
