/*
 * File: GetStatus.c
 *
 * Code generated for Simulink model 'GetStatus'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jul 14 23:46:02 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GetStatus.h"
#include "Platform_Types.h"

/* Model step function */
void autosardemo2_Step(void)
{
  boolean rtb_DiagnosticInfoCaller1_o1;
  boolean rtb_DiagnosticInfoCaller2_o1;

  /* FunctionCaller: '<Root>/DiagnosticInfoCaller2' */
  Rte_Call_SpeedStuckHigh_GetEventFailed(&rtb_DiagnosticInfoCaller2_o1);

  /* FunctionCaller: '<Root>/DiagnosticInfoCaller1' */
  Rte_Call_SpeedStuckLow_GetEventFailed(&rtb_DiagnosticInfoCaller1_o1);

  /* Outport generated from: '<Root>/Out Bus Element' */
  Rte_IWrite_autosardemo2_Step_SpeedStuckHigh_GetFailedStatus_SpeedStuckHigh_GetFailedStatus
    (rtb_DiagnosticInfoCaller2_o1);

  /* Outport generated from: '<Root>/Out Bus Element1' */
  Rte_IWrite_autosardemo2_Step_SpeedStuckLow_GetFailedStatus_SpeedStuckLow_GetFailedStatus
    (rtb_DiagnosticInfoCaller1_o1);
}

/* Model initialize function */
void autosardemo2_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
