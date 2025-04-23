/*
 * File: TPS_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef TPS_CA_H
#define TPS_CA_H

/* preprocessor validation checks */
#include "TPS_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_TPS_HWRes;
extern CA_PWS_TestResults CA_TPS_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_TPS_ExpHW;
extern CA_HWImpl CA_TPS_ActHW;

/* entry point function to run tests */
void TPS_caRunTests(void);

#endif                                 /* TPS_CA_H */
