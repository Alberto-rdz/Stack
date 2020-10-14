// g++ -Wall Stack0.cpp -o test && ./test
#include <iostream>
#include <cstdlib>
using namespace std;


// define elementos del stack
const int STACKSIZE = 10;
struct Stack
{
  int top;
  int items[STACKSIZE];
  Stack ()  {  top = -1;  }
};
bool empty (Stack* );         // true si esta vacío
bool pop (Stack*, int* );    // true si hay problemas 
bool push (Stack*, int );     // true si hay problemas 



// *************************************************************
//    Funcion principal
// *************************************************************
int main ( int argc, char **argv ) 
{
  // declara variables
  int n;
  Stack S;
  
  // pide a usuario valores de entrada
  cout << "Enter some integers, ending with 0" << endl;
  cin >> n;
  while ( (n != 0) && !push(&S,n) )
    cin >> n;

  // extrae valores
  cout << "Numbers in reverse order" << endl;
  while ( !pop(&S,&n) )
    cout << n << " ";
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
bool pop( Stack *S, int *valor )
{
  if ( empty(S) == true )
    return true;
  *(valor) = S->items[(S->top)--];
  return false;
}

// define funcion
bool push( Stack *S, int valor )
{
  if ( S->top == STACKSIZE - 1 )
    return true;
  S->items[++(S->top)] = valor;
  return false;
}
