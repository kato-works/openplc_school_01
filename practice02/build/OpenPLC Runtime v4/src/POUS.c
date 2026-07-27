void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->X0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Y0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,Y0,,!(__GET_VAR(data__->X0,)));

  goto __end;

__end:
  return;
} // MAIN_body__() 





