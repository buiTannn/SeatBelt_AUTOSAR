/*
 * File: MWDSP_EPH_F_B.c
 *
 * Code generated for Simulink model 'SetBelt'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jul 14 22:03:58 2025
 */

#include "Platform_Types.h"
#include "MWDSP_EPH_F_B.h"

uint32 MWDSP_EPH_F_B(boolean evt, uint32 *sta)
{
  sint32 curState;
  sint32 lastzcevent;
  sint32 newState;
  sint32 newStateR;
  uint32 previousState;
  uint32 retVal;

  /* S-Function (sdspcount2): '<S2>/Counter1' */
  /* Detect falling edge events */
  previousState = *sta;
  retVal = 0U;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt) {
    curState = 2;
  } else {
    curState = 1;
  }

  if (*sta == 5U) {
    newStateR = curState;
  } else if ((uint32)curState != *sta) {
    if (*sta == 3U) {
      if ((uint32)curState == 1U) {
        newStateR = 1;
      } else {
        lastzcevent = 2;
        previousState = 1U;
      }
    }

    if (previousState == 4U) {
      if ((uint32)curState == 1U) {
        newStateR = 1;
      } else {
        lastzcevent = 3;
        previousState = 1U;
      }
    }

    if (previousState == 2U) {
      retVal = 3U;
    }

    if (retVal == (uint32)lastzcevent) {
      retVal = 0U;
    }

    if (((uint32)curState == 1U) && (retVal == 3U)) {
      newState = 4;
    } else {
      newState = curState;
    }
  }

  if ((uint32)newStateR != 5U) {
    *sta = (uint32)newStateR;
    retVal = 0U;
  }

  if ((uint32)newState != 5U) {
    *sta = (uint32)newState;
  }

  /* End of S-Function (sdspcount2): '<S2>/Counter1' */
  return retVal;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
