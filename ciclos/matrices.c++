#include <iostream>
using namespace std;

int main() {
  cout << " Uso básico de matrices con ciclos: " << endl;
  cout << "----------------------------------------------------- " << endl;
  int n, o;
  cout << "Digite n: ";
  cin >> n;
  cout << "Digite o: ";
  cin >> o;
  int matriz[n][o];
  for (int i=0;i<n; i++){
    for (int j=0; j<o; j++) {
      cout << "Digite el valor " << j + 1 << " de la fila " << i + 1<< endl;
      cin >> matriz[i][j];
    }
  }
  cout << "VALORES: " << endl;
  for (int i=0;i<n; i++){
    for (int j=0; j<o; j++) {
      cout << matriz[i][j] << endl;
    }
  }
}
