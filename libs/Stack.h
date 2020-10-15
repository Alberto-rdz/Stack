//******************************************************************************
/*
  Stack.h
  Encabezados del Stack

  \author Ricardo Legarda Sáenz.
  \date 2015-09-06 22:24:10 
*/
//******************************************************************************

#ifndef _STACK_HPP //si no está definido, se crea y lo copiamos. (son macros)
#define _STACK_HPP     // include just once

// define  ADT
typedef char TIPO; 
const int STACKSIZE = 100;
struct Stack
{
  int top;
  TIPO items[STACKSIZE];
  Stack()  {  top = -1;  }
};

// define funciones del ADT
bool empty(Stack*);            // true si esta vacío
bool push(Stack*,TIPO);    // true si hay problemas 
bool pop(Stack*,TIPO*);    // true si hay problemas 

#endif




