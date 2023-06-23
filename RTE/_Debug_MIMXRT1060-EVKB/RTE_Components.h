
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'hello.Debug+MIMXRT1060-EVKB' 
 * Target:  'Debug+MIMXRT1060-EVKB' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "fsl_device_registers.h"

/* ARM::CMSIS-Compiler:I/O:STDOUT:User:1.0.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
        #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* ARM::CMSIS:RTOS2:Keil RTX5:Source:5.5.4 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
        #define RTE_CMSIS_RTOS2_RTX5_SOURCE     /* CMSIS-RTOS2 Keil RTX5 Source */
/* NXP::Board Support:SDK Drivers:evkbmimxrt1060:2.0.1 */
#ifndef XIP_EXTERNAL_FLASH
#define XIP_EXTERNAL_FLASH 1
#endif
#ifndef XIP_BOOT_HEADER_ENABLE
#define XIP_BOOT_HEADER_ENABLE 1
#endif
/* NXP::Device:SDK Drivers:xip_device:2.0.3 */
#ifndef XIP_EXTERNAL_FLASH
#define XIP_EXTERNAL_FLASH 1
#endif
#ifndef XIP_BOOT_HEADER_ENABLE
#define XIP_BOOT_HEADER_ENABLE 1
#endif
/* NXP::Device:SDK Utilities:serial_manager_uart:1.0.0 */
#ifndef SERIAL_PORT_TYPE_UART
#define SERIAL_PORT_TYPE_UART 1
#endif


#endif /* RTE_COMPONENTS_H */
