// Importamos la librería de entrada y salida
#include <iostream>

// Usamos el espacio de nombres estándar para poder escribir
using namespace std;

// Función principal
int main() {
    // Declaración de variables (Reserva de memoria)
    int numeroDePin = 13;
    float voltajeSensor = 3.3;
    bool sistemaActivo = true;
    char teclaPresionada = 'A';

    // Salida de variables (Mostrar las variables en la consola)
    cout << "Estado de Pin " << numeroDePin << ": " << sistemaActivo << endl;
    cout << "Lectura actual: " << voltajeSensor << " V" << endl;

    return 0;
}