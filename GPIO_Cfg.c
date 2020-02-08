#include "GPIO.h"
#include "GPIO_Cfg.h"
const GPIO_CfgType GPIO_ConfigParam [GPIO_GROUPS_NUMBER] =
{
         {
             1 , 1 << 2 ,
             0xff , 0 , 0 ,
             0 ,
             0 , 0 , 0 ,
             0xff , 0 , 0 ,
             0xff ,
             0
         }
         ,
         {
             1 , 1 << 3 ,
             0xff , 0 , 0 ,
             0 ,
             0 , 0 , 0xff ,
             0xff , 0 , 0 ,
             0xff ,
             0
         }
         ,
         {
             0 , 1 << 6 ,
             0xff , 0 , 0 ,
             0 ,
             0 , 0 , 0 ,
             0xff , 0 , 0 ,
             0xff ,
             0
         }
         ,
         {
             0 , 1 << 7 ,
             0xff , 0 , 0 ,
             0 ,
             0 , 0 , 0xff ,
             0xff , 0 , 0 ,
             0xff ,
             0
         }
         ,
         {
             2 , 1 << 4 ,
             0xff , 0 , 0 ,
             0xff ,
             0xff , 0 , 0 ,
             0 , 0 , 0 ,
             0xff ,
             0
         }
         ,
         {
            5 , 1 << 1 ,
            0 , 0 , 0 ,
            0xff ,
            0 , 0 , 0 ,
            0xff , 0 , 0 ,
            0xff ,
            0
         }
         ,
         {
            5 , 1 << 2 ,
            0 , 0 , 0 ,
            0xff ,
            0 , 0 , 0 ,
            0xff , 0 , 0 ,
            0xff ,
            0
         }
};
