/*
 * File: rt_roundd.c
 *
 * Code generated for Simulink model 'SetBelt'.
 *
 * Model version                  : 1.29
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Jul 13 12:48:42 2025
 */

#include "Platform_Types.h"
#include "rt_roundd.h"
#include <math.h>

float64 rt_roundd(float64 u)
{
  float64 y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
