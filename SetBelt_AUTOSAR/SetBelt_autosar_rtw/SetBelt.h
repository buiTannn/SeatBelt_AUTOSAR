/*
 * File: SetBelt.h
 *
 * Code generated for Simulink model 'SetBelt'.
 *
 * Model version                  : 1.40
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jul 14 22:59:24 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SetBelt_h_
#define SetBelt_h_
#ifndef SetBelt_COMMON_INCLUDES_
#define SetBelt_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_SetBelt.h"
#endif                                 /* SetBelt_COMMON_INCLUDES_ */

#include "SetBelt_types.h"
#include "Rte_Type.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  float64 buffer[5];                   /* '<S2>/average_speed' */
  float64 index;                       /* '<S2>/average_speed' */
  float64 count;                       /* '<S2>/average_speed' */
  uint32 Counter1_ClkEphState;         /* '<S2>/Counter1' */
  uint32 Counter1_RstEphState;         /* '<S2>/Counter1' */
  uint8 IgnitionKeySwitchCount;        /* '<Root>/Data Store Memory' */
  uint8 Counter1_Count;                /* '<S2>/Counter1' */
  boolean LogicalOperator1;            /* '<S2>/Logical Operator1' */
  boolean AND_Logic;                   /* '<S14>/AND_Logic' */
  boolean DelayInput1_DSTATE;          /* '<S12>/Delay Input1' */
  boolean DelayInput1_DSTATE_d;        /* '<S13>/Delay Input1' */
  boolean UnitDelay_DSTATE;            /* '<S2>/Unit Delay' */
} ARID_DEF_SetBelt_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_SetBelt_T SetBelt_ARID_DEF;/* '<S2>/average_speed' */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SetBelt'
 * '<S1>'   : 'SetBelt/Initialize Function'
 * '<S2>'   : 'SetBelt/Runnable1'
 * '<S3>'   : 'SetBelt/Runnable2'
 * '<S4>'   : 'SetBelt/Terminate Function'
 * '<S5>'   : 'SetBelt/Runnable1/Compare To Constant1'
 * '<S6>'   : 'SetBelt/Runnable1/SpeedDianostic'
 * '<S7>'   : 'SetBelt/Runnable1/average_speed'
 * '<S8>'   : 'SetBelt/Runnable1/SpeedDianostic/Compare To Constant'
 * '<S9>'   : 'SetBelt/Runnable1/SpeedDianostic/Compare To Constant1'
 * '<S10>'  : 'SetBelt/Runnable1/SpeedDianostic/Subsystem'
 * '<S11>'  : 'SetBelt/Runnable1/SpeedDianostic/Subsystem1'
 * '<S12>'  : 'SetBelt/Runnable2/Detect Increase'
 * '<S13>'  : 'SetBelt/Runnable2/Detect Increase1'
 * '<S14>'  : 'SetBelt/Runnable2/SBR'
 */
#endif                                 /* SetBelt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
