// g++ -Wall Stack2.cpp libs/Stack.cpp -o test && ./test
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "libs/Stack.h"
using namespace std;



// *************************************************************
//    Funcion principal
// *************************************************************
int main ( void ) 
{
  // declara variables
  Stack S;
  string buffer, nameFile;
  
  // abre archivo, lee contenidos
  cout << "Nombre del archivo que contiene una expresion matematica con parentesis" << endl;
  getline( cin, nameFile );
  ifstream fileData( nameFile.c_str() );
  if ( fileData.is_open() )
    while( !(fileData >> buffer).fail() );
  else
    {
      cout << "Error en apertura de archivo..." << endl;
      exit( EXIT_FAILURE );
    }
  fileData.close();
  cout << "Expresion a analizar : " << buffer << endl << endl;

//detecta parentesis
  bool flag = true; // porque true, quitar parentesi de iz a derecha
  int i = 0;
  while ( buffer[i] != '\0')
  {
    TIPO c = buffer[i++]; //extrae cada uno de los caracteres
    if ( c == '(')
      flag = flag && !push(&S, c); // tarea, por qué agregó flag 
    if (c == ')')
      flag = flag  && !pop(&S, &c);
  }
//resultado
  if (flag && empty(&S) )
  cout << "Expresion correcta..." << endl << endl;
  else
    cout << "expresion incorrecta.." << endl << endl;
  

  // termina funcion
  return 0;
}
