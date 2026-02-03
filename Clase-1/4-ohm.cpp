#include <iostream>
using namespace std;

// Función principal
int main() {
    float voltaje, resistencia, corriente;

    cout << "--- CALCULADORA LEY DE OHM (Voltaje) ---" << endl;

    cout << "Ingrese Corriente (I): ";
    cin >> corriente;

    cout << "Ingrese Resistencia (R): ";
    cin >> resistencia;

    // Proceso matemático
    voltaje = corriente * resistencia;

    cout << "-------------------------------" << endl;
    cout << "El voltaje es: " << voltaje << " Voltios" << endl;

    return 0;
}
