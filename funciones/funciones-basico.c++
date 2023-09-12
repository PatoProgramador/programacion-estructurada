#include <iostream>
using namespace std;

double calcula_venta(double, double, float); // Declaración
int main()
{
 cout << "Uso funciones de forma básica " << endl;
 cout << "----------------------------------------------------- " << endl;
 double vunitario, cantidad;
 int iva;
 cout << "Introduzca el número de articulos a comprar: ";
 cin >> cantidad;
 cout << "Introduzca el valor unitario del articulo: ";
 cin >> vunitario;
 cout << "Introduzca el valor del IVA: ";
 cin >> iva;
 double resultado, boolean = calcula_venta(vunitario, cantidad, iva); // Llamada
 if (boolean) {
   cout << "El producto dado esta excento de IVA. El valor total de la venta de "<< cantidad << " unidades, cada una con un valor de $ "
  << vunitario
   << " , tiene un costo de $ " << resultado << ".\n";
 } else {
      cout << "El producto no esta excento de IVA. El valor total de la venta de "<< cantidad << " unidades, cada una con un valor de $ "
  << vunitario
   << " , tiene un costo de $ " << resultado << ".\n";
 }
}
// Definición
double calcula_venta(double num1, double num2, float iv)
{
 bool ex = true;
 double venta;
 if (num1 > 1000000) {
   int ivaVenta = num1 * num2 * iv;
   venta = ivaVenta + num1 * num2;
   ex = false;
 } else {
   venta = num1 * num2;
 }
 return venta, ex;
}
