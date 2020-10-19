// g++ -Wall Stack3.cpp libs/Stack.cpp -o test && ./test
#include<iostream>
#include<cstring>
#include<cctype>
#include "libs/Stack.h"
using namespace std;



// define funcion 


// *************************************************************
//    Funcion principal
// *************************************************************
int main ( int argc, char **argv ) 
{
  // declara variables
  Stack S;
  char buffer[STACKSIZE];
  
  // valores de la terminal ?
  if ( argc > 1 )
    {
      // elimina espacios de la entrada de la terminal
      buffer[0] = '\0';
      for ( int i = 1; i < argc; i++ )
        strcat( buffer, argv[i] );
    }
  else  // no, 
    {
       cout << "Escribe una expresion matematica posfija valida" << endl;
       cin.get( buffer, STACKSIZE );
    }

  // termina funcion
  return 0;
}

// *************************************************************
//  Definicion de funciones de la evaluacion
// *************************************************************

