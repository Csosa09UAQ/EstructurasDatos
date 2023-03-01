#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Ingrese el tamaño de la lista: ";
  cin >> n;

  int arr[n];
  cout << "Ingrese los " << n << " numeros enteros separados por espacios: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n-1; i++) {
    int minimo = i;
    for (int j = i+1; j < n; j++) {
      if (arr[j] < arr[minimo]) {
        minimo = j;
      }
    }
    
    int temporal = arr[minimo];
    arr[minimo] = arr[i];
    arr[i] = temporal;
  }

  cout << "La lista ordenada es: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}