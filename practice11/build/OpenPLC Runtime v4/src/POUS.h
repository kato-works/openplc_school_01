#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

// PROGRAM MAIN
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,X3)
  __DECLARE_VAR(BOOL,X4)
  __DECLARE_VAR(BOOL,X5)
  __DECLARE_VAR(BOOL,Y0)
  __DECLARE_VAR(BOOL,Y1)

  // PROGRAM private variables - TEMP, private and located variables

} MAIN;

void MAIN_init__(MAIN *data__, BOOL retain);
// Code part
void MAIN_body__(MAIN *data__);
#endif //__POUS_H
