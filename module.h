#ifndef MODULE_H_
#define MODULE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct ModuleInterface
{ 
  void (*moduleSetParam)(void*); 
  void (*moduleInit)(void); 
  void (*moduleExecute)(void); 
  void (*moduleDeinit)(void); 
} IModule; 

typedef struct ModuleClass
{
  const char * moduleName; 
  IModule * iModule; 
} Module; 

// Wrapper
static inline void setParam(Module *module, void * params) {
  module->iModule->moduleSetParam(params); 
}

static inline void init(Module *module) {
  module->iModule->moduleInit(); 
}

static inline void execute(Module *module) {
  module->iModule->moduleExecute(); 
}

static inline void deinit(Module *module) {
  module->iModule->moduleDeinit(); 
}

extern IModule IMR[], IMP[]; 

#endif 


