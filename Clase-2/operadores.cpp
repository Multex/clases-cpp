#include <iostream>
using namespace std;

int main(){
    float voltaje, presion; // Agregamos corriente

    cout << "Ingrese Voltaje (V): ";
    cin >> voltaje;
    cout << "Ingrese Presion (Psi): ";
    cin >> presion;

    // && AND
    /* El voltaje debe ser mayor a 150 Y la presión menor a 50 Y
    la corriente mayor a 40 */
    if(voltaje > 200 && presion < 100){
        cout << "SISTEMA OPERATIVO: Iniciando secuencia..." << endl;
    } else {
        cout << "PRECAUCION: Condiciones no seguras." << endl;
        cout << "Sistema bloqueado!" << endl;
    }

    return 0;
}