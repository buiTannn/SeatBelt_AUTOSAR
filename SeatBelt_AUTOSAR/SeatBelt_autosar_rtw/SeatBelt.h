/*
 * File: SeatBelt.h
 *
 * Code generated for Simulink model 'SeatBelt'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jul 14 23:49:04 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SeatBelt_h_
#define SeatBelt_h_
#ifndef SeatBelt_COMMON_INCLUDES_
#define SeatBelt_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_SetBelt.h"
#endif                                 /* SeatBelt_COMMON_INCLUDES_ */

#include "SeatBelt_types.h"
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
} ARID_DEF_SeatBelt_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_SeatBelt_T SeatBelt_ARID_DEF;/* '<S2>/average_speed' */

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
 * '<Root>' : 'SeatBelt'
 * '<S1>'   : 'SeatBelt/Initialize Function'
 * '<S2>'   : 'SeatBelt/Runnable1'
 * '<S3>'   : 'SeatBelt/Runnable2'
 * '<S4>'   : 'SeatBelt/Terminate Function'
 * '<S5>'   : 'SeatBelt/Runnable1/Compare To Constant1'
 * '<S6>'   : 'SeatBelt/Runnable1/SpeedDianostic'
 * '<S7>'   : 'SeatBelt/Runnable1/average_speed'
 * '<S8>'   : 'SeatBelt/Runnable1/SpeedDianostic/Compare To Constant'
 * '<S9>'   : 'SeatBelt/Runnable1/SpeedDianostic/Compare To Constant1'
 * '<S10>'  : 'SeatBelt/Runnable1/SpeedDianostic/Subsystem'
 * '<S11>'  : 'SeatBelt/Runnable1/SpeedDianostic/Subsystem1'
 * '<S12>'  : 'SeatBelt/Runnable2/Detect Increase'
 * '<S13>'  : 'SeatBelt/Runnable2/Detect Increase1'
 * '<S14>'  : 'SeatBelt/Runnable2/SBR'
 */
#endif                                 /* SeatBelt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
