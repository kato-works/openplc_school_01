#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

// PROGRAM MAIN
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,CR)
  __DECLARE_VAR(BOOL,CR4)
  __DECLARE_VAR(BOOL,CR5)
  __DECLARE_VAR(BOOL,CR6)
  __DECLARE_VAR(BOOL,CR7)
  __DECLARE_LOCATED(BOOL,SW1)
  __DECLARE_LOCATED(BOOL,SW2)
  __DECLARE_LOCATED(BOOL,CR1)
  __DECLARE_LOCATED(BOOL,CR2)
  __DECLARE_LOCATED(BOOL,CR3)

} MAIN;

void MAIN_init__(MAIN *data__, BOOL retain);
// Code part
void MAIN_body__(MAIN *data__);
#endif //__POUS_H
