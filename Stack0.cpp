// g++ -Wall Stack0.cpp -o test && ./test
#include <iostream>
#include <cstdlib>
using namespace std;
//comentario push 3 

// define elementos del stack
typedef float TIPO; //agregamos esta funcion para no cambiar todo los tipos del código
const int STACKSIZE = 10; //nuestro stack está limitado a 10 elementos
struct Stack
{
  int top;
  TIPO items[STACKSIZE];
  Stack ()  {  top = -1;  } //constructor
};
bool empty (Stack* );         // true si esta vacío
bool pop (Stack*, TIPO* );    // true si hay problemas 
bool push (Stack*, TIPO );     // true si hay problemas 



// *************************************************************
//    Funcion principal
// *************************************************************
int main ( int argc, char **argv ) 
{
  // declara variables
  TIPO n;
  Stack S;

  //valores de la terminal 
if( argc > 1)
{
  int i = 1;
  n = atoi(  argv[i] );
  while ((n != 0) && !push (&S, n) )
    n = atoi ( argv [++i] );
}
  else // no pide a usuarios valores de entrada
  {
    cout << "Enter some integers, ending with 0" << endl;
    cin >> n;
     while ( (n != 0) && !push(&S,n) ) //mientras el valor no sea 0 y el psuh no me marque que está lleno, puedo ingresar datos y los gurdo en el stack S, lo pasopor referencia
     cin >> n; //cuando encuentre el límite de los espacios o encuente el cero, va a parar
  }

  // extrae valores
  cout << "Numbers in reverse order" << endl;
  while ( !pop(&S,&n) ) //el valor que estoy extrayendo lo obtengo por medio de "n"
    cout << n << " "; //impirmo el valor
  cout << endl;
  
  // termina funcion
  return 0;
}




// *************************************************************
//  Definicion de funciones
// *************************************************************
// define funcion
bool empty( Stack *S )
{    return (S->top == -1);    }

// define funcion
bool pop( Stack *S, TIPO *valor ) //extrae elementos de la pila. //pasamos por referncia *valor
{
  if ( empty(S) == true ) //si está vacío, no se puede extrar nada :(
    return true; //al retornar un true, quiere decir que hubo problemas
  *(valor) = S->items[(S->top)--]; // si no hubo problemas, sí puede extrar algo
  return false;                    //extraigo el elemnto que está apuntando el top, paso la posición y decremento en 1 a top
} // si retorna false, es que no hubo problemas. 

// define funcion
bool push( Stack *S, TIPO valor ) // ingresa elementos a la pila (estructua) //pasamos por valor
{
  if ( S->top == STACKSIZE - 1 ) //verifico si mi stack está lleno (el menos 1 es porque se inicia contar desde cero en el arreglo)
    return true; // si está lleno hay problema y no puede agregarse nada
  S->items[++(S->top)] = valor; // si no, en caso de que haya espacio, 
  return false; //incrementamos nuestro valor de top, y guardamos el dato en la variable "valor"
}// si retorna false, es que no hubo problema y se pudo hacer
