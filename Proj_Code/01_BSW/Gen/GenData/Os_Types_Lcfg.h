/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Types_Lcfg.h
 *   Generation Time: 2026-09-29 11:46:36
 *           Project: Tc275_Basic - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/

#ifndef OS_TYPES_LCFG_H
# define OS_TYPES_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* OS-Application identifiers. */
#define SystemApplication_OsCore0 SystemApplication_OsCore0
#define SystemApplication_OsCore1 SystemApplication_OsCore1
#define SystemApplication_OsCore2 SystemApplication_OsCore2

/* Trusted function identifiers. */

/* Non-trusted function identifiers. */

/* Fast trusted function identifiers. */

/* Task identifiers. */
#define App_10ms_Task_Core0 App_10ms_Task_Core0
#define App_10ms_Task_Core1 App_10ms_Task_Core1
#define App_10ms_Task_Core2 App_10ms_Task_Core2
#define Bsw_5ms_Task_Core0 Bsw_5ms_Task_Core0
#define Default_Init_Task Default_Init_Task
#define Default_Init_Task_Core1 Default_Init_Task_Core1
#define Default_Init_Task_Core2 Default_Init_Task_Core2
#define IdleTask_OsCore0 IdleTask_OsCore0
#define IdleTask_OsCore1 IdleTask_OsCore1
#define IdleTask_OsCore2 IdleTask_OsCore2

/* Category 2 ISR identifiers. */
#define CounterIsr_SystemTimer_core0 CounterIsr_SystemTimer_core0
#define CounterIsr_SystemTimer_core1 CounterIsr_SystemTimer_core1
#define CounterIsr_SystemTimer_core2 CounterIsr_SystemTimer_core2

/* Alarm identifiers. */
#define Rte_Al_TE2_Bsw_5ms_Task_Core0_0_10ms Rte_Al_TE2_Bsw_5ms_Task_Core0_0_10ms
#define Rte_Al_TE_Test_Led_Test_Runable_1s Rte_Al_TE_Test_Led_Test_Runable_1s

/* Counter identifiers. */
#define SystemTimer_Core0 SystemTimer_Core0
#define SystemTimer_Core1 SystemTimer_Core1
#define SystemTimer_Core2 SystemTimer_Core2

/* ScheduleTable identifiers. */

/* Resource identifiers. */
#define OsResource_Core0 OsResource_Core0
#define OsResource_Core1 OsResource_Core1
#define OsResource_Core2 OsResource_Core2

/* Spinlock identifiers. */

/* Peripheral identifiers. */

/* Barrier identifiers. */

/* Trace thread identifiers (Tasks and ISRs inclusive system objects). */

/* Trace spinlock identifiers (All spinlocks inclusive system objects). */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/*! OS-Application identifiers. */
typedef enum
{
  SystemApplication_OsCore0 = 0, /* 0x00000001 */  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemApplication_OsCore1 = 1, /* 0x00000002 */  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemApplication_OsCore2 = 2, /* 0x00000004 */  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_APPID_COUNT = 3,
  INVALID_OSAPPLICATION = OS_APPID_COUNT
} ApplicationType;

/*! Trusted function identifiers. */
typedef enum
{
  OS_TRUSTEDFUNCTIONID_COUNT = 0
} TrustedFunctionIndexType;

/*! Non-trusted function identifiers. */
typedef enum
{
  OS_NONTRUSTEDFUNCTIONID_COUNT = 0
} Os_NonTrustedFunctionIndexType;

/*! Fast trusted function identifiers. */
typedef enum
{
  OS_FASTTRUSTEDFUNCTIONID_COUNT = 0
} Os_FastTrustedFunctionIndexType;

/*! Task identifiers. */
typedef enum
{
  App_10ms_Task_Core0 = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  App_10ms_Task_Core1 = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  App_10ms_Task_Core2 = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Bsw_5ms_Task_Core0 = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Core1 = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Core2 = 6,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  IdleTask_OsCore0 = 7,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  IdleTask_OsCore1 = 8,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  IdleTask_OsCore2 = 9,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_TASKID_COUNT = 10,
  INVALID_TASK = OS_TASKID_COUNT
} TaskType;

/*! Category 2 ISR identifiers. */
typedef enum
{
  CounterIsr_SystemTimer_core0 = 0,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer_core1 = 1,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer_core2 = 2,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ISRID_COUNT = 3,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifiers. */
typedef enum
{
  Rte_Al_TE2_Bsw_5ms_Task_Core0_0_10ms = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Test_Led_Test_Runable_1s = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ALARMID_COUNT = 2
} AlarmType;

/*! Counter identifiers. */
typedef enum
{
  SystemTimer_Core0 = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemTimer_Core1 = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemTimer_Core2 = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_COUNTERID_COUNT = 3
} CounterType;

/*! ScheduleTable identifiers. */
typedef enum
{
  OS_SCHTID_COUNT = 0
} ScheduleTableType;

/*! Resource identifiers. */
typedef enum
{
  OsResource_Core0 = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OsResource_Core1 = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OsResource_Core2 = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_RESOURCEID_COUNT = 3
} ResourceType;

/*! Spinlock identifiers. */
typedef enum
{
  OS_SPINLOCKID_COUNT = 0,
  INVALID_SPINLOCK = OS_SPINLOCKID_COUNT
} SpinlockIdType;

/*! Peripheral identifiers. */
typedef enum
{
  OS_PERIPHERALID_COUNT = 0
} Os_PeripheralIdType;

/*! Barrier identifiers. */
typedef enum
{
  OS_BARRIERID_COUNT = 0
} Os_BarrierIdType;

/*! Trace thread identifiers (Tasks and ISRs inclusive system objects). */
typedef enum
{
  OS_TRACE_THREADID_COUNT = 0,
  OS_TRACE_INVALID_THREAD = OS_TRACE_THREADID_COUNT + 1
} Os_TraceThreadIdType;

/*! Trace spinlock identifiers (All spinlocks inclusive system objects). */
typedef enum
{
  OS_TRACE_NUMBER_OF_CONFIGURED_SPINLOCKS = OS_SPINLOCKID_COUNT,
  OS_TRACE_NUMBER_OF_ALL_SPINLOCKS = OS_SPINLOCKID_COUNT + 0u,  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */
  OS_TRACE_INVALID_SPINLOCK = OS_TRACE_NUMBER_OF_ALL_SPINLOCKS + 1
} Os_TraceSpinlockIdType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TYPES_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Types_Lcfg.h
 *********************************************************************************************************************/
