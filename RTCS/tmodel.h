/*****************************************************************************
* University of Southern Denmark
* Embedded C Programming (ECP)
*
* MODULENAME.: tmodel.h
*
* PROJECT....: ECP
*
* DESCRIPTION: Defines the elemtn of the task model..
*
* Change Log:
******************************************************************************
* Date    Id    Change
* YYMMDD
* --------------------
* 101004  MoH   Module created.
*
*****************************************************************************/

#ifndef _TMODEL_H_
#define _TMODEL_H_

#include "rtcs.h"

// Tasks.
// ------
#define TASK_UART_RX     USER_TASK
#define TASK_KEY         USER_TASK+1
#define TASK_UI              USER_TASK+2
#define TASK_UI_KEY      USER_TASK+3
#define TASK_UART_TX     USER_TASK+4
#define TASK_RTC         USER_TASK+5
#define TASK_DISPLAY_RTC USER_TASK+6
#define TASK_LCD         USER_TASK+7


// Interrupt Service Routines.
// ---------------------------
#define ISR_TIMER 21

// Semaphores.
// -----------
#define SEM_LCD          USER_SEM
#define SEM_RTC_UPDATED  USER_SEM+1


// Shared State Memory.
// --------------------
#define SSM_RTC_SEC            31
#define SSM_RTC_MIN            32
#define SSM_RTC_HOUR           33

// QUEUEs.
// -------
#define Q_UART_TX   USER_QUEUE
#define Q_UART_RX   USER_QUEUE+1
#define Q_LCD       USER_QUEUE+2
#define Q_KEY       USER_QUEUE+3

#endif /* _TMODEL_H_ */
