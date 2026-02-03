#include <iostream>
#include <string>
using namespace std;

// 1. Definición (El Plano)
// Va arriba del main
struct DroneData {
    int id;
    float bateria;
    float altitud;
    string estado;
}; // No olvidar este punto y coma

int main() {
    // 2. Instancia (Crear el objeto real)
    DroneData drone1;
    
    cout << "--- Telemetría de drones ---" << endl;

    // 3. Acceso a nuestros objetos
    // Objeto: Drone 1

    cout << "Ingrese ID del dron: "; cin >> drone1.id;
    cout << "Ingrese la Bateria: "; cin >> drone1.bateria;
    cout << "Ingrese la Altitud: "; cin >> drone1.altitud;
    cout << "Ingrese el Estado: "; cin >> drone1.estado;

    // Mostramos los datos
    cout << "[ TRAMA RECIBIDA ]" << endl;
    cout << "------------------" << endl;
    cout << "ID: " << drone1.id << endl;
    cout << "BAT: " << drone1.bateria << " %" << endl;
    cout << "ALT: " << drone1.altitud << " m" << endl;
    cout << "STATUS: " << drone1.estado << endl;
}
