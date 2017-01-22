/*
 * functions.h
 *
 *  Created on: 22 gen 2017
 *      Author: mat25
 */

/*
 * functions.h
 *
 *  Created on: 08 nov 2016
 *      Author: mat25
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_


/**********
 * INCLUDES
 *********/
#include "stdint.h"
#include "states.h"
/********
 * VARIABLES
 ********/
typedef enum { FALSE, TRUE } bool;

static uint16_t MAX_ERRORS = 6;
uint16_t ERR_COUNT;		//inizializzato in Instate di INIT

/******
 * TYPEDEFS
 ******/

typedef void (* const voidFunc)(void);

/******
* PROTOTYPES
******/
enum states StateMachine(enum events event, enum guards guard, enum states Current_State);
//enum states StateMachine(enum events event, enum states Current_State);

void State_Enter_INIT(void);   void State_Enter_IDLE(void);   void State_Enter_COMPUTE(void);
void State_InState_INIT(void); void State_InState_IDLE(void); void State_InState_COMPUTE(void);
void State_Exit_INIT(void);    void State_Exit_IDLE(void);    void State_Exit_COMPUTE(void);

void State_Enter_RESET(void);   void State_Enter_CHECK_AND_SEND_DATA(void);
void State_InState_RESET(void); void State_InState_CHECK_AND_SEND_DATA(void);
void State_Exit_RESET(void);    void State_Exit_CHECK_AND_SEND_DATA(void);

enum guards Check_Errors(void);

voidFunc Upon_Enter[S_MAX] = {State_Enter_INIT, State_Enter_IDLE, State_Enter_COMPUTE, State_Enter_RESET,State_Enter_CHECK_AND_SEND_DATA};
voidFunc Action_While_In_State[S_MAX] = {State_InState_INIT, State_InState_IDLE, State_InState_COMPUTE, State_InState_RESET,State_InState_CHECK_AND_SEND_DATA};
voidFunc Upon_Exit[S_MAX] = {State_Exit_INIT, State_Exit_IDLE, State_Exit_COMPUTE, State_Exit_RESET,State_Exit_CHECK_AND_SEND_DATA};


#endif /* FUNCTIONS_H_ */
