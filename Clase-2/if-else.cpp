#include <iostream>
using namespace std;

int main(){
    int pinSecreto = xxxxxx; // 6 Dígitos
    int pinIngresado;

    cout << "--- CONTROL DE ACCESO ---" << endl;
    cout << "Ingrese el PIN de seguridad: ";
    cin >> pinIngresado;

    // Comparaciones de contraseña
    if(pinIngresado == pinSecreto){
        cout << "ACCESO CONCEDIDO. Bienvenido!" << endl;
    } else {
        cout << "ERROR: Pin incorrecto" << endl;
        cout << "ALERTA: Activando alarmas" << endl;
    }

    return 0;
}