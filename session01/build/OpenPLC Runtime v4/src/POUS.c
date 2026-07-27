void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->CR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CR5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CR6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CR7,__BOOL_LITERAL(FALSE),retain)
  __INIT_LOCATED(BOOL,__IX0_3,data__->SW1,retain)
  __INIT_LOCATED_VALUE(data__->SW1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX0_4,data__->SW2,retain)
  __INIT_LOCATED_VALUE(data__->SW2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX2_0,data__->CR1,retain)
  __INIT_LOCATED_VALUE(data__->CR1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX2_1,data__->CR2,retain)
  __INIT_LOCATED_VALUE(data__->CR2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0,data__->CR3,retain)
  __INIT_LOCATED_VALUE(data__->CR3,__BOOL_LITERAL(FALSE))
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_LOCATED(data__->,CR1,,__GET_LOCATED(data__->SW1,));
  __SET_LOCATED(data__->,CR2,,__GET_LOCATED(data__->SW2,));
  __SET_LOCATED(data__->,CR3,,(!(__GET_LOCATED(data__->CR2,)) && (__GET_LOCATED(data__->CR1,) || __GET_LOCATED(data__->CR3,))));

  goto __end;

__end:
  return;
} // MAIN_body__() 





