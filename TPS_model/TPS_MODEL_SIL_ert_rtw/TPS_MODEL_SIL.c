/*
 * File: TPS_MODEL_SIL.c
 *
 * Code generated for Simulink model 'TPS_MODEL_SIL'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Thu Apr 24 00:08:40 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "TPS_MODEL_SIL.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;
static void TPS(void);

/* Output and update for atomic system: '<Root>/TPS' */
static void TPS(void)
{
  /* Outport: '<Root>/TPS_coherency_failure' incorporates:
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/TPS_vsen_1'
   *  Inport: '<Root>/TPS_vsen_2'
   *  RelationalOperator: '<S2>/Compare'
   *  Sum: '<S1>/Add'
   */
  rtY.TPS_coherency_failure = (rtU.TPS_vsen_1 + rtU.TPS_vsen_2 > 5.0F);

  /* Outport: '<Root>/TPS_sen_1_failure' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/TPS_vsen_1'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S1>/GreaterThan'
   *  RelationalOperator: '<S1>/GreaterThan1'
   */
  rtY.TPS_sen_1_failure = ((rtU.TPS_vsen_1 > 4.5F) || (rtU.TPS_vsen_1 < 0.5F));

  /* Outport: '<Root>/TPS_sen_2_failure' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/TPS_vsen_2'
   *  Logic: '<S1>/OR1'
   *  RelationalOperator: '<S1>/GreaterThan2'
   *  RelationalOperator: '<S1>/GreaterThan3'
   */
  rtY.TPS_sen_2_failure = ((rtU.TPS_vsen_2 > 4.5F) || (rtU.TPS_vsen_2 < 0.5F));
}

/* Model step function */
void TPS_MODEL_SIL_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/TPS' */
  TPS();

  /* End of Outputs for SubSystem: '<Root>/TPS' */
}

/* Model initialize function */
void TPS_MODEL_SIL_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
