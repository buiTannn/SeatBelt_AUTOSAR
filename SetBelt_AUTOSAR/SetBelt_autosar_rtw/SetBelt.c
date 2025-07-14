/*
 * File: SetBelt.c
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

#include "SetBelt.h"
#include "MWDSP_EPH_F_B.h"
#include <math.h>
#include "rt_roundd.h"
#include "Platform_Types.h"
#include "Rte_Type.h"

/* PublicStructure Variables for Internal Data */
ARID_DEF_SetBelt_T SetBelt_ARID_DEF;   /* '<S2>/average_speed' */

/* Model step function */
void demo_Step(void)
{
  float64 r;
  uint16 tmp_0;
  Dem_EventStatusType tmp;
  boolean rtb_RelationalOperator;
  boolean rtb_RelationalOperator1;
  boolean rtb_RelationalOperator_c_tmp;
  boolean rtb_RelationalOperator_f;
  enState_IgnitionKey rtb_RelationalOperator_tmp;

  /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Runnable1'
   */
  /* RelationalOperator: '<S2>/Relational Operator' incorporates:
   *  Inport generated from: '<Root>/In Bus Element1'
   *  Switch: '<S2>/Switch'
   *  UnitDelay: '<S2>/Unit Delay'
   * */
  rtb_RelationalOperator_c_tmp =
    Rte_IRead_demo_Step_SeatBeltFasten_SeatBeltFasten();

  /* RelationalOperator: '<S2>/Relational Operator' incorporates:
   *  Inport generated from: '<Root>/In Bus Element1'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  rtb_RelationalOperator_f = (rtb_RelationalOperator_c_tmp ==
    SetBelt_ARID_DEF.UnitDelay_DSTATE);

  /* Logic: '<S2>/Logical Operator1' */
  SetBelt_ARID_DEF.LogicalOperator1 = !rtb_RelationalOperator_f;

  /* S-Function (sdspcount2): '<S2>/Counter1' */
  if (MWDSP_EPH_F_B(SetBelt_ARID_DEF.LogicalOperator1,
                    &SetBelt_ARID_DEF.Counter1_RstEphState) != 0U) {
    SetBelt_ARID_DEF.Counter1_Count = 0U;
  }

  if (MWDSP_EPH_F_B(rtb_RelationalOperator_f,
                    &SetBelt_ARID_DEF.Counter1_ClkEphState) != 0U) {
    if (SetBelt_ARID_DEF.Counter1_Count < 3) {
      SetBelt_ARID_DEF.Counter1_Count++;
    } else {
      SetBelt_ARID_DEF.Counter1_Count = 0U;
    }
  }

  /* RelationalOperator: '<S9>/Compare' incorporates:
   *  Inport generated from: '<Root>/In Bus Element2'
   *  MATLAB Function: '<S2>/average_speed'
   */
  tmp_0 = Rte_IRead_demo_Step_Speed_Speed();

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/DEM_EVENT_STATUS_PASSED'
   *  Constant: '<S11>/DEM_EVENT_STATUS_PREFAILED'
   *  Constant: '<S9>/Constant'
   *  Inport generated from: '<Root>/In Bus Element2'
   *  RelationalOperator: '<S9>/Compare'
   */
  if (tmp_0 > 45) {
    tmp = DEM_EVENT_STATUS_PREFAILED;
  } else {
    tmp = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S11>/Switch' */

  /* FunctionCaller: '<S6>/StuckHigh' */
  Rte_Call_SpeedStuckHigh_SetEventStatus(tmp);

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/DEM_EVENT_STATUS_PASSED'
   *  Constant: '<S10>/DEM_EVENT_STATUS_PREFAILED'
   *  Constant: '<S8>/Constant'
   *  Inport generated from: '<Root>/In Bus Element2'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   */
  if (tmp_0 < 5) {
    tmp = DEM_EVENT_STATUS_PREFAILED;
  } else {
    tmp = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S10>/Switch' */

  /* FunctionCaller: '<S6>/StuckLow' */
  Rte_Call_SpeedStuckLow_SetEventStatus(tmp);

  /* MATLAB Function: '<S2>/average_speed' */
  SetBelt_ARID_DEF.buffer[(sint32)SetBelt_ARID_DEF.index - 1] = tmp_0;
  if (SetBelt_ARID_DEF.index == 0.0) {
    r = 0.0;
  } else {
    r = fmod(SetBelt_ARID_DEF.index, 5.0);
    if (r == 0.0) {
      r = 0.0;
    } else if (SetBelt_ARID_DEF.index < 0.0) {
      r += 5.0;
    }
  }

  SetBelt_ARID_DEF.index = r + 1.0;
  SetBelt_ARID_DEF.count = fmin(SetBelt_ARID_DEF.count + 1.0, 5.0);

  /* Update for UnitDelay: '<S2>/Unit Delay' */
  SetBelt_ARID_DEF.UnitDelay_DSTATE = rtb_RelationalOperator_c_tmp;

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator1' incorporates:
   *  SubSystem: '<Root>/Runnable2'
   */
  /* RelationalOperator: '<S3>/Relational Operator' incorporates:
   *  Inport generated from: '<Root>/In Bus Element'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S3>/Relational Operator1'
   */
  rtb_RelationalOperator_tmp = Rte_IRead_demo_Step_Key_Key();

  /* RelationalOperator: '<S3>/Relational Operator' incorporates:
   *  Constant: '<S3>/ON_STATE'
   *  Inport generated from: '<Root>/In Bus Element'
   */
  rtb_RelationalOperator = (rtb_RelationalOperator_tmp == ON);

  /* RelationalOperator: '<S3>/Relational Operator1' incorporates:
   *  Constant: '<S3>/CRANK_STATE'
   */
  rtb_RelationalOperator1 = (rtb_RelationalOperator_tmp == CRANK);

  /* DataStoreWrite: '<S3>/Data Store Write' incorporates:
   *  DataStoreRead: '<S3>/Data Store Read'
   *  Logic: '<S3>/Logical Operator'
   *  RelationalOperator: '<S12>/FixPt Relational Operator'
   *  RelationalOperator: '<S13>/FixPt Relational Operator'
   *  Sum: '<S3>/Add'
   *  UnitDelay: '<S12>/Delay Input1'
   *  UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S12>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SetBelt_ARID_DEF.IgnitionKeySwitchCount = (uint8)((uint32)(((sint32)
    rtb_RelationalOperator > (sint32)SetBelt_ARID_DEF.DelayInput1_DSTATE) ||
    ((sint32)rtb_RelationalOperator1 > (sint32)
     SetBelt_ARID_DEF.DelayInput1_DSTATE_d)) +
    SetBelt_ARID_DEF.IgnitionKeySwitchCount);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Runnable1'
   */
  /* MATLAB Function: '<S2>/average_speed' */
  r = rt_roundd(((((SetBelt_ARID_DEF.buffer[0] + SetBelt_ARID_DEF.buffer[1]) +
                   SetBelt_ARID_DEF.buffer[2]) + SetBelt_ARID_DEF.buffer[3]) +
                 SetBelt_ARID_DEF.buffer[4]) / SetBelt_ARID_DEF.count);
  if (r < 65536.0) {
    if (r >= 0.0) {
      tmp_0 = (uint16)r;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = ((uint16)(65535U));
  }

  /* S-Function (fcgen): '<Root>/Function-Call Generator1' incorporates:
   *  SubSystem: '<Root>/Runnable2'
   */
  /* Logic: '<S14>/AND_Logic' incorporates:
   *  Constant: '<S14>/ON_STATE'
   *  Inport generated from: '<Root>/In Bus Element1'
   *  Logic: '<S14>/NOT_SeatBelt'
   *  MATLAB Function: '<S2>/average_speed'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S14>/Speed_Check'
   *  Switch: '<S2>/Switch'
   */
  SetBelt_ARID_DEF.AND_Logic = (tmp_0 > 5);
  SetBelt_ARID_DEF.AND_Logic = ((rtb_RelationalOperator_tmp == ON) &&
    (rtb_RelationalOperator_f && (!rtb_RelationalOperator_c_tmp)) &&
    SetBelt_ARID_DEF.AND_Logic);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* FunctionCaller: '<S3>/NvMServiceCaller' */
  Rte_Call_IgnitionKeySwitchCount_WriteBlock
    (&SetBelt_ARID_DEF.IgnitionKeySwitchCount);

  /* Update for UnitDelay: '<S12>/Delay Input1'
   *
   * Block description for '<S12>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SetBelt_ARID_DEF.DelayInput1_DSTATE = rtb_RelationalOperator;

  /* Update for UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SetBelt_ARID_DEF.DelayInput1_DSTATE_d = rtb_RelationalOperator1;

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* Outport generated from: '<Root>/Out Bus Element1' */
  Rte_IWrite_demo_Step_SeatbeltIcon_SeatbeltIcon(SetBelt_ARID_DEF.AND_Logic);

  /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Runnable1'
   */
  /* Outport generated from: '<Root>/Out Bus Element' incorporates:
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S5>/Compare'
   *  S-Function (sdspcount2): '<S2>/Counter1'
   */
  Rte_IWrite_demo_Step_SeatbeltFastenError_SeatbeltFastenError
    (SetBelt_ARID_DEF.Counter1_Count >= 1);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/* Model initialize function */
void demo_Init(void)
{
  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Runnable1'
   */
  /* InitializeConditions for S-Function (sdspcount2): '<S2>/Counter1' */
  SetBelt_ARID_DEF.Counter1_ClkEphState = 5U;
  SetBelt_ARID_DEF.Counter1_RstEphState = 5U;

  /* SystemInitialize for MATLAB Function: '<S2>/average_speed' */
  SetBelt_ARID_DEF.index = 1.0;

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* Outputs for Atomic SubSystem: '<Root>/Initialize Function' */
  /* FunctionCaller: '<S1>/NvMServiceCaller' */
  Rte_Call_IgnitionKeySwitchCount_ReadBlock
    (&SetBelt_ARID_DEF.IgnitionKeySwitchCount);

  /* End of Outputs for SubSystem: '<Root>/Initialize Function' */
}

/* Model terminate function */
void demo_Terminate(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Terminate Function' */
  /* FunctionCaller: '<S4>/NvMServiceCaller' */
  Rte_Call_IgnitionKeySwitchCount_WriteBlock
    (&SetBelt_ARID_DEF.IgnitionKeySwitchCount);

  /* End of Outputs for SubSystem: '<Root>/Terminate Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
