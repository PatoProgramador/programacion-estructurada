#include <iostream>
using namespace std;
int main()
{
  int a, b, tventa, opcion;
  opcion = 0;
  cout << "Uso del switch basico " << endl;
  cout << "----------------------------------------------------- " << endl;
  cout << "Ingrese la Opcion de la compra " << endl;
  cout << " (1) Articulos sin Iva " << endl;
  cout << " (2) Articulos con Iva " << endl;
  cin >> opcion;
  switch (opcion)
  {
  case 1:
    cout << "Usted ha seleccionado articulos Sin Iva" << endl;

    cout << "Introduzca el valor de articulo: " << endl;
    cin >> a;
    cout << "Introduzca la cantidad de articulos: " << endl;
    cin >> b;
    tventa = b * a;
    cout << "----------------------------------------------------- " << endl;
    cout << "El total de la venta es: " << tventa << endl;
    break;
  case 2:
    float iv = 0;
    cout << "Usted ha seleccionado articulos con Iva" << endl;
    cout << "Introduzca el valor del IVA: " << endl;
    cin >> iv;
    cout << "Introduzca el valor de articulo: " << endl;
    cin >> a;
    cout << "Introduzca la cantidad de articulos: " << endl;
    cin >> b;
    tventa = b * a;
    cout << "----------------------------------------------------- " << endl;
    cout << "El total de la venta es: " << tventa << endl;
    int iva = a * b * iv;
    tventa = iva + b * a;
    cout << "El iva de la venta es: " << iva << endl;
    cout << "El total de la venta es: " << tventa << endl;
    break;

    return 0;
  }
}