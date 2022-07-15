/* ************************************************************************** */
/** Descriptive File Name

    Microchip
    global definitions for gfx mono library
 *  
 */
/* ************************************************************************** */

#ifndef _EXAMPLE_FILE_NAME_H    /* Guard against multiple inclusion */
#define _EXAMPLE_FILE_NAME_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
#include <stddef.h>
#include <assert.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

#include "../peripheral/port/plib_port.h"
#include "../peripheral/sercom/spi_master/plib_sercom0_spi_master.h"
#include "../rtos/FreeRTOS/Source/include/FreeRTOS.h"
#include "../rtos/FreeRTOS/Source/include/task.h"

#define GFX_DELAY_FUNCTION(x)           vTaskDelay( pdMS_TO_TICKS( x ) )
#define GFX_SPI_WRITE_FUNCTION(x,y)     SERCOM0_SPI_Write(x,y)
#define GFX_SPI_IS_BUSY()               SERCOM0_SPI_IsBusy()
#define GFX_DISPLAY_RESET_CLEAR()       DISPLAY_RESET_Clear()
#define GFX_DISPLAY_RESET_SET()         DISPLAY_RESET_Set()
#define GFX_DISPLAY_SS_N_CLEAR()        DISPLAY_SS_N_Clear()
#define GFX_DISPLAY_SS_N_SET()          DISPLAY_SS_N_Set()
#define GFX_DATA_CMD_SEL_CLEAR()        DATA_CMD_SEL_Clear()
#define GFX_DATA_CMD_SEL_SET()          DATA_CMD_SEL_Set()

#define PRINTF_BLOCKING(fmt, ...) \
    while(SYS_CMD_READY_TO_WRITE()); \
    SYS_CMD_PRINT(fmt, ##__VA_ARGS__);

#define GFX_MONO_UG_2832HSWEG04
#include "../../gfx_mono/gfx_mono_text.h"


#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
