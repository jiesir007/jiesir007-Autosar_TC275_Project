/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_Type.h
 *           Config:  D:/Autosar/CodePackage/Autosar_TC275_Project2/Proj_Config/Bsw_Cfg/Cfg/Tc275_Basic.dpa
 *        SW-C Type:  Test_Led
 *  Generation Time:  2026-09-29 19:26:24
 *
 *        Generator:  MICROSAR RTE Generator Version 4.21.0
 *                    RTE Core Version 1.21.0
 *          License:  CBD1600956
 *
 *      Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"

/* PRQA S 1039 EOF */ /* MD_Rte_1039 */

/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

#  define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

#  define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

#  define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

#  define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

#  define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

#  define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

#  define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

#  define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

# endif

#endif /* RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

*/
