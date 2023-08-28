#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  float iv, iv2;
  int tventa, tventa2;
  cout << "Uso de condicionales: " << endl;
  cout << "----------------------------------------------------- " << endl;
  cout << "Introduzca el valor del primer articulo: ";
  cin >> a;
  cout << "Introduzca la cantidad de articulos: ";
  cin >> b;
  if (a < 1000000)
  {
    tventa = b * a;
    cout << "El producto esta excento de IVA" << endl;
    cout << "El valor de la venta es: " << tventa << endl;
  }
  else
  {
    cout << "El producto no esta excento de IVA, introduzca el valor del IVA por favor: ";
    cin >> iv;
    float iva = a * b * iv;
    tventa = iva + a * b;
    cout << "El valor de la venta con IVA es: " << tventa << endl;
  }
  cout << "----------------------------------------------------- " << endl;
  cout << "Introduzca el valor del segundo articulo: ";
  cin >> c;
  cout << "Introduzca la cantidad de articulos: ";
  cin >> d;
  if (c < 1000000)
  {
    tventa2 = d * c;
    cout << "El producto esta excento de IVA" << endl;
    cout << "El valor de la venta es: " << tventa2 << endl;
  }
  else
  {
    cout << "El producto no esta excento de IVA, introduzca el valor del IVA por favor: ";
    cin >> iv2;
    float iva2 = c * d * iv2;
    tventa2 = iva2 + c * d;
    cout << "El valor de la venta con IVA es: " << tventa2 << endl;
  }
  cout << "----------------------------------------------------- " << endl;
  cout << "El valor total de la venta de ambos productos es: " << tventa + tventa2 << endl;
  return 0;
}