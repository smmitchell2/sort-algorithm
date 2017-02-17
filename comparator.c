#include <stdlib.h>
#include <string.h>
#include "integer.h"
#include "real.h"
#include "comparator.h"

int intComp(void *v,void *w){
  return ((integer *) v)->value - ((integer *) w)->value;
}

int stringComp(void *a, void *b){  
  return strcmp((char*)a,(char*)b);
}

int realComp(void *v, void *w){
  return ((real *) v)->value - ((real *) w)->value;
}
