//******************************************************************************
/**
  Stack.cpp
  Funciones del Stack

  \author Ricardo Legarda Sáenz.
  \date 2015-09-06 22:25:58  
*/
//******************************************************************************

// directivas del preprocesador
#include <iostream>
#include <cstring>
#include "Stack.h"
using namespace std;

// *************************************************************
//  Definicion de funciones del Stack
// *************************************************************
// define funcion
bool empty( Stack *S )
{    return (S->top == -1);    }

// define funcion
bool pop( Stack *S, TIPO *valor )
{
  if ( empty(S) == true )
    return true;
  *(valor) = S->items[(S->top)--];
  return false;
}

// define funcion
bool push( Stack *S, TIPO valor )
{
  if ( S->top == STACKSIZE - 1 )
    return true;
  S->items[++(S->top)] = valor;
  return false;
}
