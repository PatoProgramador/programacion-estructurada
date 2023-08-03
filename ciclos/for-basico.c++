#include <iostream>
using namespace std;

int main()
{
  int a, b, c, i, tventa;
  int ventaacum = 0;
  int ivAcum = 0;
  cout << "Uso del ciclo for basico: " << endl;
  cout << "----------------------------------------------------- " << endl;
  cout << "Introduzca la cantidad de articulos a adquirir en esta compra: ";
  cin >> c;
  for (i = 0; i < c; i++)
  {
    cout << "----------------------------------------------------- " << endl;
    cout << "Introduzca el valor de articulo " << i + 1 << ": ";
    cin >> a;
    cout << "Introduzca las unidades de articulos: ";
    cin >> b;
    if (a < 1000000)
    {
      int tventa = b * a;
      ventaacum += tventa;
    }
    else
    {
      float iv;
      cout << "El producto no esta excento de IVA, Introduzca el valor del iva: ";
      cin >> iv;
      int iva = a * b * iv;
      ivAcum += iva;
      tventa = iva + b * a;
      ventaacum += tventa;
    }
  }
  cout << "----------------------------------------------------- " << endl;
  cout << "El total de la venta es: " << ventaacum << endl;
  cout << "El total que se paga por IVA es: " << ivAcum << endl;
  return 0;
}