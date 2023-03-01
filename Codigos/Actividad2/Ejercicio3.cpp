#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    int num_palabras = 0;
    bool dentro_palabra = false;

    cout << "Introduce una cadena de caracteres: ";
    getline(cin, cadena);

    // Recorremos la cadena de caracteres y contamos las palabra
    for (char c : cadena) {
        if (c == ' ' ) {
            dentro_palabra = false;
        } else if (!dentro_palabra) {
            dentro_palabra = true;
            num_palabras++;
        }
    }

    cout << "El numero de palabras en la cadena es: " << num_palabras << endl;

    return 0;
}
