#include <iostream>
using namespace std;

int main()
{
  cout << "Uso del ciclo while basico: " << endl;
  cout << "----------------------------------------------------- " << endl;
  string validator = "s";
  int valor, cantidad;
  int compraAcum = 0;
  int ivaAcumulado = 0;
  float iva;
  while (validator == "s")
  {
    cout << "Ingrese el valor del producto: ";
    cin >> valor;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    if (valor < 1000000)
    {
      int suma = valor * cantidad;
      compraAcum += suma;
    }
    else
    {
      cout << "El producto no está excento de IVA, ingrese el IVA, por favor: ";
      cin >> iva;
      int iv = valor * cantidad * iva;
      int sumaIv = valor * cantidad + iv;
      ivaAcumulado += iv;
      compraAcum = compraAcum + sumaIv;
    }
    cout << "---------------------------------------" << endl;
    cout << "¿Desea continuar? Si(s), No(n) " << endl;
    cin >> validator;
    cout << "---------------------------------------" << endl;
  }
  cout << "El valor total de la compra es: " << compraAcum << endl;
  cout << "El valor total pagado en IVA es: " << ivaAcumulado << endl;
  return 0;
}
