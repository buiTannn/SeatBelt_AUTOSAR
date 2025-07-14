/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "autosardemo2"
   ARXML schema: "4.2"
   File generated on: "Mon Jul 14 23:46:13 2025"  */

#ifndef Rte_autosardemo2_h
#define Rte_autosardemo2_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_autosardemo2_Step_SpeedStuckHigh_GetFailedStatus_SpeedStuckHigh_GetFailedStatus Rte_IWrite_autosardemo2_autosardemo2_Step_SpeedStuckHigh_GetFailedStatus_SpeedStuckHigh_GetFailedStatus

void
  Rte_IWrite_autosardemo2_Step_SpeedStuckHigh_GetFailedStatus_SpeedStuckHigh_GetFailedStatus
  (boolean u);

#define Rte_IWriteRef_autosardemo2_Step_SpeedStuckHigh_GetFailedStatus_SpeedStuckHigh_GetFailedStatus Rte_IWriteRef_autosardemo2_autosardemo2_Step_SpeedStuckHigh_GetFailedStatus_SpeedStuckHigh_GetFailedStatus

boolean*
  Rte_IWriteRef_autosardemo2_Step_SpeedStuckHigh_GetFailedStatus_SpeedStuckHigh_GetFailedStatus
  (void);

#define Rte_IWrite_autosardemo2_Step_SpeedStuckLow_GetFailedStatus_SpeedStuckLow_GetFailedStatus Rte_IWrite_autosardemo2_autosardemo2_Step_SpeedStuckLow_GetFailedStatus_SpeedStuckLow_GetFailedStatus

void
  Rte_IWrite_autosardemo2_Step_SpeedStuckLow_GetFailedStatus_SpeedStuckLow_GetFailedStatus
  (boolean u);

#define Rte_IWriteRef_autosardemo2_Step_SpeedStuckLow_GetFailedStatus_SpeedStuckLow_GetFailedStatus Rte_IWriteRef_autosardemo2_autosardemo2_Step_SpeedStuckLow_GetFailedStatus_SpeedStuckLow_GetFailedStatus

boolean*
  Rte_IWriteRef_autosardemo2_Step_SpeedStuckLow_GetFailedStatus_SpeedStuckLow_GetFailedStatus
  (void);

/* Entry point functions */
extern FUNC(void, autosardemo2_CODE) autosardemo2_Init(void);
extern FUNC(void, autosardemo2_CODE) autosardemo2_Step(void);

/* Server operation call points */
#define Rte_Call_SpeedStuckHigh_GetEventFailed Rte_Call_autosardemo2_SpeedStuckHigh_GetEventFailed

Std_ReturnType Rte_Call_SpeedStuckHigh_GetEventFailed(boolean* EventFailed);

#define Rte_Call_SpeedStuckLow_GetEventFailed Rte_Call_autosardemo2_SpeedStuckLow_GetEventFailed

Std_ReturnType Rte_Call_SpeedStuckLow_GetEventFailed(boolean* EventFailed);

#endif
