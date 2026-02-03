#include <iostream>
using namespace std;

int main() {
    // 1. Declaración: Una caja con 4 compartimientos
    float notas[4];

    cout << "--- PROMEDIO DE NOTAS ---" << endl;

    // 2. Llenado manual de datos (Recordando el índice 0)
    cout << "Ingrese nota 1: ";
    cin >> notas[0];

    cout << "Ingrese nota 2: ";
    cin >> notas[1];

    cout << "Ingrese nota 3: ";
    cin >> notas[2];

    cout << "Ingrese nota 4: ";
    cin >> notas[2];

    // 3. Cálculo usando los datos guardados
    float promedio = (notas[0] + notas[1] + notas[2]) / 3;

    cout << "Promedio: " << promedio << endl;

    return 0;
}