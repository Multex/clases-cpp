// Importamos la librería de entrada y salida
#include <iostream>

// Usamos el espacio de nombres estándar para poder escribir
using namespace std;

// Función principal
int main() {
    float temperatura;

    cout << "Ingrese la temperatura actual: ";
    // cin = Console IN (Entrada de la consola)
    cin >> temperatura;

    cout << "Procesando..." << endl;
    cout << "Dato registrado: " << temperatura << " grados" << endl;

    return 0;
}