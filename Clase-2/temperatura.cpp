/*
1. Entradas: Pedir temperatura C° y presión (Psi)

2. CONDICIÓN CRÍTICA (Explosión):
    Si Temperatura > 100 Y Presión > 200 → Evacuar planta.

3. Alerta Operativa:
    Si Temperatura > 100 O Presión > 200 → Advertencia: Revisar sistemas

4. Estado Normal:
    Cualquier otro caso → Sistema Normal
*/

#include <iostream>
using namespace std;

int main(){
    float temperatura, presion;

    cout << "--- CONTROL DE CALDERA INDUSTRIAL ---" << endl;
    cout << "Ingrese Temperatura (C°): ";
    cin >> temperatura;
    cout << "Ingrese Presion (Psi): ";
    cin >> presion;

    cout << "Analizando telemetría..." << endl;

    // Parte de Condicionales y Operadores
    if(temperatura > 100 && presion > 200) {
        cout << "¡EVACUAR LA PLANTA!" << endl;
    } else if(temperatura > 100 || presion > 200) {
        cout << "ADVERTENCIA: Revisar Sistemas" << endl;
    } else {
        cout << "Sistemas Normales" << endl;
    }

    return 0;
}