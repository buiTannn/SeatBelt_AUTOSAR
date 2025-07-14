/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "SetBelt"
   ARXML schema: "4.2"
   File generated on: "Mon Jul 14 22:59:29 2025"  */

#ifndef Rte_SetBelt_h
#define Rte_SetBelt_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_demo_Step_Key_Key    Rte_IRead_SetBelt_demo_Step_Key_Key

enState_IgnitionKey Rte_IRead_demo_Step_Key_Key(void);

#define Rte_IRead_demo_Step_SeatBeltFasten_SeatBeltFasten Rte_IRead_SetBelt_demo_Step_SeatBeltFasten_SeatBeltFasten

boolean Rte_IRead_demo_Step_SeatBeltFasten_SeatBeltFasten(void);

#define Rte_IRead_demo_Step_Speed_Speed Rte_IRead_SetBelt_demo_Step_Speed_Speed

uint16 Rte_IRead_demo_Step_Speed_Speed(void);

#define Rte_IWrite_demo_Step_SeatbeltIcon_SeatbeltIcon Rte_IWrite_SetBelt_demo_Step_SeatbeltIcon_SeatbeltIcon

void Rte_IWrite_demo_Step_SeatbeltIcon_SeatbeltIcon(boolean u);

#define Rte_IWriteRef_demo_Step_SeatbeltIcon_SeatbeltIcon Rte_IWriteRef_SetBelt_demo_Step_SeatbeltIcon_SeatbeltIcon

boolean* Rte_IWriteRef_demo_Step_SeatbeltIcon_SeatbeltIcon(void);

#define Rte_IWrite_demo_Step_SeatbeltFastenError_SeatbeltFastenError Rte_IWrite_SetBelt_demo_Step_SeatbeltFastenError_SeatbeltFastenError

void Rte_IWrite_demo_Step_SeatbeltFastenError_SeatbeltFastenError(boolean u);

#define Rte_IWriteRef_demo_Step_SeatbeltFastenError_SeatbeltFastenError Rte_IWriteRef_SetBelt_demo_Step_SeatbeltFastenError_SeatbeltFastenError

boolean* Rte_IWriteRef_demo_Step_SeatbeltFastenError_SeatbeltFastenError(void);

/* Entry point functions */
extern FUNC(void, SetBelt_CODE) demo_Init(void);
extern FUNC(void, SetBelt_CODE) demo_Step(void);
extern FUNC(void, SetBelt_CODE) demo_Terminate(void);

/* Server operation call points */
#define Rte_Call_IgnitionKeySwitchCount_ReadBlock Rte_Call_SetBelt_IgnitionKeySwitchCount_ReadBlock

Std_ReturnType Rte_Call_IgnitionKeySwitchCount_ReadBlock(void* NvM_DstPtr);

#define Rte_Call_SpeedStuckHigh_SetEventStatus Rte_Call_SetBelt_SpeedStuckHigh_SetEventStatus

Std_ReturnType Rte_Call_SpeedStuckHigh_SetEventStatus(Dem_EventStatusType
  EventStatus);

#define Rte_Call_SpeedStuckLow_SetEventStatus Rte_Call_SetBelt_SpeedStuckLow_SetEventStatus

Std_ReturnType Rte_Call_SpeedStuckLow_SetEventStatus(Dem_EventStatusType
  EventStatus);

#define Rte_Call_IgnitionKeySwitchCount_WriteBlock Rte_Call_SetBelt_IgnitionKeySwitchCount_WriteBlock

Std_ReturnType Rte_Call_IgnitionKeySwitchCount_WriteBlock(const void* SrcPtr);

#define Rte_Call_IgnitionKeySwitchCount_WriteBlock Rte_Call_SetBelt_IgnitionKeySwitchCount_WriteBlock

Std_ReturnType Rte_Call_IgnitionKeySwitchCount_WriteBlock(const void* SrcPtr);

#endif
