/*
 * hw.c
 *
 *  Created on: 2021. 11. 5.
 *      Author: gns2l
 */



#include "hw.h"



bool hwInit(void)
{
  bool ret = true;


  ret &= bspInit();

  ret &= ledInit();

  return ret;
}
