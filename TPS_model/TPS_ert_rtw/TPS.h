/*
 * File: TPS.h
 *
 * Code generated for Simulink model 'TPS'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Thu Apr 24 00:16:18 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TPS_h_
#define RTW_HEADER_TPS_h_
#ifndef TPS_COMMON_INCLUDES_
#define TPS_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TPS_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T TPS_vsen_1;                 /* '<Root>/TPS_vsen_1' */
  real32_T TPS_vsen_2;                 /* '<Root>/TPS_vsen_2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T TPS_sen_1_failure;         /* '<Root>/TPS_sen_1_failure' */
  boolean_T TPS_sen_2_failure;         /* '<Root>/TPS_sen_2_failure' */
  boolean_T TPS_conherency_failure;    /* '<Root>/TPS_conherency_failure' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void TPS_initialize(void);
extern void TPS_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('TPS_MODEL_SIL/TPS')    - opens subsystem TPS_MODEL_SIL/TPS
 * hilite_system('TPS_MODEL_SIL/TPS/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TPS_MODEL_SIL'
 * '<S1>'   : 'TPS_MODEL_SIL/TPS'
 * '<S2>'   : 'TPS_MODEL_SIL/TPS/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_TPS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
