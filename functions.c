/*

 * functions.c
 *
 *  Created on: 08 nov 2016
 *      Author: mat25
 */

#include "functions.h"
#include "states.h"


/*******
 * Functions
 *******/
enum guards Check_Errors(void){

	if(ERR_COUNT < MAX_ERRORS) return ERR_COUNT_OK;
	else if(ERR_COUNT == MAX_ERRORS) return NOT_ERR_COUNT_OK;
	else if(ERR_COUNT > MAX_ERRORS) return NOT_ERR_COUNT_OK;

}

/********
 * State machine main function
 *******/

enum states StateMachine(enum events event, enum guards guard, enum states Current_State)
{
    int Next_State = Current_State;

    switch ( Current_State )
    {
    case INIT:
           switch (event )
           {

               case (PERIPH_ALIVE):
                  if(guard == NOT_BUSY) Next_State = IDLE;
                   	break;
               default:
            	   break;
           }
    break;
    case IDLE:
           switch (event )
           {

               case (NOT_PERIPH_ALIVE):
               	if (guard == NOT_ERR_COUNT_OK) Next_State = RESET_MCH;
                   break;
               case (NEW_DATA):
                Next_State = COMPUTE;
                	break;

               default:
            	   break;
           }
    break;
    case COMPUTE:
           switch (event )
           {

               case (NOT_DATA_OK):
               	if(guard == NOT_ERR_COUNT_OK) Next_State = RESET_MCH;
                   break;
               case (DATA_READY):
                if (guard == NOT_BUSY) Next_State = CHECK_AND_SEND;
                	break;
               default:
            	   break;
           }
    break;
    case RESET_MCH:
           switch (event )
           {

               case (PERIPH_ALIVE):
               	if (guard == NOT_BUSY)Next_State = IDLE;
                   break;
               default:
            	   break;
           }
    break;
    case CHECK_AND_SEND:
           switch (event )
           {

               case (DATA_OK):
               	if(guard == NOT_BUSY)Next_State = IDLE;
                   break;
               case (NOT_DATA_OK_ERR_COUNT_OK):
                if (guard == NOT_BUSY) Next_State = COMPUTE;
               default:
            	   break;
           }
    break;



       default:
           break;
    }




    if (Next_State != Current_State)
    {
        // Function call for Upon Exit function, it can be omitted but allows extra functionality
        Upon_Exit[Current_State]();
        // Function call for Upon Enter function, it can be omitted but allows extra functionality
        if (Next_State != S_MAX) Upon_Enter[Next_State]();
    }
    else // ActionWhileInState is only be called when NOT doing a transition
     {
        if ( event != E_MAX) Action_While_In_State[Current_State]();
    }
    return Next_State;
}


/*******
 * States related functions
 ******/

void State_Enter_INIT(void){

}
void State_InState_INIT(void){

	ERR_COUNT = 0;

}
void State_Exit_INIT(void){}

void State_Enter_IDLE(void){}
void State_InState_IDLE(void){}
void State_Exit_IDLE(void){}

void State_Enter_COMPUTE(void){}
void State_InState_COMPUTE(void){}
void State_Exit_COMPUTE(void){}

void State_Enter_RESET(void){}
void State_InState_RESET(void){}
void State_Exit_RESET(void){}

void State_Enter_CHECK_AND_SEND_DATA(void){}
void State_InState_CHECK_AND_SEND_DATA(void){}
void State_Exit_CHECK_AND_SEND_DATA(void){}


