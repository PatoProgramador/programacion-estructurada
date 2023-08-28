#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Uso de if-else y if anidados: " << endl;
  cout << "----------------------------------------------------- " << endl;
  cout << "Ingrese el valor de a: ";
  cin >> a;
  cout << "Ingrese el valor de b: ";
  cin >> b;
  cout << "Ingrese el valor de c: ";
  cin >> c;
  cout << "----------------------------------------------------- " << endl;
  // Condicional principal
  if (a == b && a == c)
  {
    cout << "El valor de todas las variables es igual, siendo estas: " << a << ", " << b << ", " << c;
  }
  else
  {
    // Condicional principal en busqueda del mayor
    if (a > b)
    {
      // Condicional secundario de a
      if (a > c)
      {
        cout << "El valor mayor es de la variable a, siendo este: " << a << endl;
      }
      else
      {
        cout << "El valor mayor es el de la varibale c, siendo este: " << c << endl;
      }
    }
    else
    {
      // Condicional secundario de b
      if (b > c)
      {
        cout << "El valor mayor es el de la variable b, siendo este: " << b << endl;
      }
      else
      {
        cout << "El valor mayor es el de la varibale c, siendo este: " << c << endl;
      }
    }
  }
  return 0;
}