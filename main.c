#include <stdio.h>
#include "module.h"
#include "imr.h" 
#include "imp.h"

int main(void) {
  Module myIMR = {"IMR", IMR }; 
  Module myIMP = {"IMP", IMP }; 

  ImrConf myImrConf = { "IMR-01" }; 
  ImpConf myImpConf = { "IMP-01" }; 

  setParam(&myIMR, &myImrConf); 
  setParam(&myIMP, &myImpConf);   

  init(&myIMR); 
  init(&myIMP); 

  execute(&myIMR); 
  execute(&myIMP); 

  deinit(&myIMR); 
  deinit(&myIMP); 

  return 0; 
}
