#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    float iv, iv2;
    cout << "Captura de variables por consola y calculos de valores: " << endl;
    cout << "----------------------------------------------------- " << endl;
    cout << "Introduzca el valor del primer articulo: ";
    cin >> a;
    cout << "Introduzca la cantidad de articulos: ";
    cin >> b;
    cout << "Introduzca el valor del iva de este primer articulo: ";
    cin >> iv;
    int iva = a * b * iv;
    int tventa = iva + b * a;
    cout << "----------------------Informacion de la primera compra------------------------------- " << endl;
    cout << "El iva de la primera venta es: " << iva << endl;
    cout << "El total de primera la venta es: " << tventa << endl;
    cout << "El producto adquirido tiene un valor de : " << a << endl;
    cout << "La cantidad de articulos comprados es: " << b << endl;
    cout << "----------------------------------------------------- " << endl;
    cout << "Introduzca el valor del segundo articulo: ";
    cin >> c;
    cout << "Introduzca la cantidad de articulos: ";
    cin >> d;
    cout << "Introduzca el iva del segundo articulo: ";
    cin >> iv2;
    int iva2 = c * d * iv2;
    int tventa2 = iva2 + d * c;
    int sumatory = tventa + tventa2;
    cout << "----------------------Informacion de la segunda compra------------------------------- " << endl;
    cout << "El iva de la segunda venta es: " << iva << endl;
    cout << "El total de la segunda venta es: " << tventa << endl;
    cout << "El producto adquirido tiene un valor de : " << c << endl;
    cout << "La cantidad de articulos comprados es: " << d << endl;
    cout << "----------------------Informacion total de las compras------------------------------- " << endl;
    cout << "La suma de ambas compras es: " << sumatory << endl;
    return 0;
}
