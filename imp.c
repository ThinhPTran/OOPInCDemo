
#include "module.h"
#include "imp.h"

static ImpConf impConf; 


static void moduleSetParam(void * inputConf) {

    ImpConf * input = (ImpConf *) inputConf; 
    impConf.moduleName = input->moduleName; 

}

static void moduleInit(void)
{
    printf("Module %s is initializing!!!\n", impConf.moduleName);
}

static void moduleExecute(void)
{
    printf("Module %s is executing!!!\n", impConf.moduleName);
}

static void moduleDeinit(void)
{
    printf("Module %s is deinitializing!!!\n", impConf.moduleName);
}

IModule IMP[] = { {moduleSetParam, moduleInit, moduleExecute, moduleDeinit} }; 
