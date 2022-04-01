#include "module.h"
#include "imr.h"

static ImrConf imrConf; 


static void moduleSetParam(void * inputConf) {

    ImrConf * input = (ImrConf *) inputConf; 
    imrConf.moduleName = input->moduleName; 

}


static void moduleInit(void)
{
    printf("Module %s is initializing!!!\n", imrConf.moduleName);
}

static void moduleExecute(void)
{
    printf("Module %s is executing!!!\n", imrConf.moduleName);
}

static void moduleDeinit(void)
{
    printf("Module %s is deinitializing!!!\n", imrConf.moduleName);
}

IModule IMR[] = { {moduleSetParam, moduleInit, moduleExecute, moduleDeinit} }; 

