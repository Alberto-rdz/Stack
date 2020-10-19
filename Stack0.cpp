// g++ -Wall Stack0.cpp -o test && ./test
#include <iostream>
#include <cstdlib>
#include "libs/Stack.h" //agregamos el encabezado guardado en libs
using namespace std;
//comentario push 3 

// *************************************************************
//    Funcion principal
// *************************************************************
int main ( int argc, char **argv ) 
{
  // declara variables
  TIPO n;
  Stack S;

  //valores de la terminal  

    cout << "Enter some integers  data type TIPO, ending with 0" << endl;
    cin >> n;
    while ( (n != '0') && !push(&S,n) ) //mientras el valor no sea 0 y el psuh no me marque que está lleno, puedo ingresar datos y los gurdo en el stack S, lo pasopor referencia
    cin >> n; //cuando encuentre el límite de los espacios o encuente el cero, va a parar
  
  // extrae valores
  cout << "Numbers in reverse order" << endl;
  while ( !pop(&S,&n) ){ //el valor que estoy extrayendo lo obtengo por medio de "n"
    cout << n << " "; //impirmo el valor
    
  }
cout << endl;
  
  // termina funcion
  return 0;
}