#include <iostream>
#include <string>
using namespace std;

// 1. Definición (El Plano)
// Va arriba del main
struct Drone {
    int id;
    float bateria;
    string estado;
}; // No olvidar este punto y coma

int main() {
    // 2. Instancia (Crear el objeto real)
    Drone drone1;
    Drone drone2;

    // 3. Acceso a nuestros objetos
    // Objeto: Drone 1
    drone1.id = 1001;
    drone1.bateria = 70;
    drone1.estado = "En espera";

    // Objeto: Drone 2
    drone2.id = 1002;
    drone2.bateria = 40;
    drone2.estado = "En uso";

    // Mostramos los datos
    // Drone 1
    cout << "-------------------------" << endl;
    cout << "Drone ID: " << drone1.id << endl;
    cout << "Nivel de Bateria: " << drone1.bateria << " %" << endl;
    cout << "Estado: " << drone1.estado << endl;

    // Drone 2
    cout << "-------------------------" << endl;
    cout << "Drone ID: " << drone2.id << endl;
    cout << "Nivel de Bateria: " << drone2.bateria << " %" << endl;
    cout << "Estado: " << drone2.estado << endl;
}
