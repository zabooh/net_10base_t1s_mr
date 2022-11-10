/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
 *******************************************************************************/

#ifndef APP_H
#define APP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "configuration.h"
#include "config/default/system/time/sys_time.h"
#include "config/default/library/tcpip/tcpip.h"
#include "config/default/library/tcpip/udp.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
    // DOM-IGNORE-END

    // *****************************************************************************
    // *****************************************************************************
    // Section: Type Definitions
    // *****************************************************************************
    // *****************************************************************************
#define UDP_SERVER_PORT         47134
#define RECEIVE_BUFFER_SIZE     1024
#define TRANSMIT_BUFFER_SIZE    1024
#define SERVER_TIME_SLOT        100
    
    // *****************************************************************************

/* Application states

      Summary:
        Application states enumeration

      Description:
        This enumeration defines the valid application states.  These states
        determine the behavior of the application at various times.
     */

    typedef enum {
        /* Application's state machine's initial state. */
        APP_MIIM_INIT = 0,
        APP_DISPLAY_INIT,
        APP_WAIT_STACK_INIT,
        APP_READ_OPERATION_MODE,
        APP_READ_PLCA_CONFIGURATION,
        APP_WRITE_PLCA_CONFIGURATION,
        APP_MIIM_CLOSE,
        APP_TCPIP_WAIT_FOR_IP,
        APP_STATE_SERVICE_TASKS,
        /* TODO: Define states used by the application state machine. */

    } APP_STATES;


    // *****************************************************************************

    /* Application Data

      Summary:
        Holds application data

      Description:
        This structure holds the application's data.

      Remarks:
        Application strings and buffers are be defined outside this structure.
     */

    typedef struct {
        /* The application's current state */
        APP_STATES state;

        SYS_TIME_HANDLE timer_client_hdl;
        UDP_SOCKET udp_client_socket;
        SYS_TIME_HANDLE timer_server_hdl;
        UDP_SOCKET udp_server_socket;  
        TCPIP_NET_HANDLE netH;
        IPV4_ADDR ipAddr;
        char receive_buffer[RECEIVE_BUFFER_SIZE];
        char transmit_buffer[TRANSMIT_BUFFER_SIZE];        
        /* TODO: Define any additional data used by the application. */
        uint32_t temp_rnd_identity;
    } APP_DATA;

    // *****************************************************************************
    // *****************************************************************************
    // Section: Application Callback Routines
    // *****************************************************************************
    // *****************************************************************************
    /* These routines are called by drivers when certain events occur.
     */

    // *****************************************************************************
    // *****************************************************************************
    // Section: Application Initialization and State Machine Functions
    // *****************************************************************************
    // *****************************************************************************

    /*******************************************************************************
      Function:
        void APP_Initialize ( void )

      Summary:
         MPLAB Harmony application initialization routine.

      Description:
        This function initializes the Harmony application.  It places the
        application in its initial state and prepares it to run so that its
        APP_Tasks function can be called.

      Precondition:
        All other system initialization routines should be called before calling
        this routine (in "SYS_Initialize").

      Parameters:
        None.

      Returns:
        None.

      Example:
        <code>
        APP_Initialize();
        </code>

      Remarks:
        This routine must be called from the SYS_Initialize function.
     */

    void APP_Initialize(void);


    /*******************************************************************************
      Function:
        void APP_Tasks ( void )

      Summary:
        MPLAB Harmony Demo application tasks function

      Description:
        This routine is the Harmony Demo application's tasks function.  It
        defines the application's state machine and core logic.

      Precondition:
        The system and application initialization ("SYS_Initialize") should be
        called before calling this.

      Parameters:
        None.

      Returns:
        None.

      Example:
        <code>
        APP_Tasks();
        </code>

      Remarks:
        This routine must be called from SYS_Tasks() routine.
     */

    void APP_Tasks(void);

    //DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* APP_H */

/*******************************************************************************
 End of File
 */

