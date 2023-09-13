#include <iostream>
using namespace std;

// funciones de calculo
int calculoVenta(int cantidad, int valorUnitario) {
  int calculo = 0;
  calculo = cantidad * valorUnitario;
  return calculo;
}
int calculoIva(int cantidad, int valorUnitario, float iva) {
  int ivaArticulo = cantidad * valorUnitario * iva;
  return ivaArticulo;
}
// funcion para feedback constante al usuario
void userFeedback(int acumuladoIva, int totalIva, int acumuladoSinIva, int totalDeVenta, int acumuladoArticulos) {
  cout << "------------------------Acumulado-------------------------" << endl;
  cout << "La cantidad de compras CON iva hasta el momento son: " << acumuladoIva << endl;
  cout << "El valor acumulado que se esta pagando por iva es: " << totalIva << endl;
  cout << "La cantidad de compras SIN iva hasta el momento son: " << acumuladoSinIva << endl;
  cout << "La cantidad de articulos comprados hasta el momento son: " << acumuladoArticulos << endl;
  cout << "El valor total de la compra hasta el momento es: " << totalDeVenta << endl;
  cout << "----------------------------------------------------------" << endl;
}

int main()
{
  // valores guia: opcion y totales
  int op = 0;
  int totalVenta = 0;
  int totalIva = 0;
  int acumIv = 0;
  int acumSinIv = 0;
  int acumArticulos = 0;
  // valores variables: cada compra se reasignan
  int valorUnit = 0;
  int cant = 0;
  float iv = 0;
  cout << "Ingrese (1) para articulos con iva y (2) para articulos sin iva: ";
  cin >> op;
  // ciclo while guia, opciones 1 y 2 para compra, 3 para fin...
  while(op != 3) {
    switch (op)
    {
    case 1:
      // Caso con IVA
      cout << "Ingrese la cantidad de articulos a comprar: ";
      cin >> cant;
      cout << "Ingrese el valor unitario del articulo: ";
      cin >> valorUnit;
      acumArticulos += cant;
      if (valorUnit < 1000000) {
        cout << "El articulo esta excento de iva, la operación se calculará sin el Iva... " << endl;
        int result = calculoVenta(cant, valorUnit);
        totalVenta += result;
        acumSinIv++;
      } else {
        cout << "Ingrese el iva, por favor: ";
        cin >> iv;
        // calculos
        int result = calculoVenta(cant, valorUnit);
        int iva = calculoIva(cant, valorUnit, iv);
        // se aplica el iva
        result = result + iva;
        // acumuladores
        totalVenta += result;
        totalIva += iva;
        acumIv++;
      }
      // feedback al usuario respecto de los acumulados hasta el momento
      userFeedback(acumIv, totalIva, acumSinIv, totalVenta, acumArticulos);
      cout << "¿Desea continuar comprando? (1) para articulos con iva, (2) para articulos sin iva y (3) para finalizar y ver el total: ";
      cin >> op;
      break;
    case 2:
      // Caso sin IVA
      cout << "Ingrese la cantidad de articulos a comprar: ";
      cin >> cant;
      cout << "Ingrese el valor unitario del articulo: ";
      cin >> valorUnit;
      acumArticulos += cant;
      if (valorUnit > 1000000) {
        cout << "El articulo no esta excento de iva, ingrese el iva por favor: ";
        cin >> iv;
        // operaciones
        int result = calculoVenta(cant, valorUnit);
        int iva = calculoIva(cant, valorUnit, iv);
        // aplicacion del iva
        result = result + iva;
        // acumuladores
        totalVenta += result;
        totalIva += iva;
        acumIv++;
      } else {
        int result = calculoVenta(cant, valorUnit);
        totalVenta += result;
        acumSinIv++;
      }
      // feedback al usuario respecto de los acumulados hasta el momento
      userFeedback(acumIv, totalIva, acumSinIv, totalVenta, acumArticulos);
      cout << "¿Desea continuar comprando? (1) para articulos con iva, (2) para articulos sin iva y (3) para finalizar y ver el total: ";
      cin >> op;
      break;
    default:
      break;
    }
  }
  cout << "==================== Factura de venta ====================" << endl;
  cout << "La cantidad de compras CON iva fueron: " << acumIv << endl;
  cout << "La cantidad de compras SIN iva fueron: " << acumSinIv << endl;
  cout << "--------------------------------------------------" << endl;
  cout << "El total de articulos comprados es: " << acumArticulos << endl;
  cout << "El valor total pagado en iva es: "<< totalIva << endl;
  cout << "El valor de total de los articulos es: " << totalVenta << endl;
  cout << "--------------------------------------------------" << endl;
}
