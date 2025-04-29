//  Imprimir en pantalla los números del 1 al 10.
#include <iostream>

using namespace std;

int main()
{
  int contador; 

  do
  {
    contador = contador + 1 ;
    cout << "Tu numero es: " << contador << "\n";
  } while (contador >= 10);
  
  cout << endl;
  return 0;
}

