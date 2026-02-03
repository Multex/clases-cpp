#include <iostream>
using namespace std;

// Funciones
// FUNCIÓN CON RETORNO
// Recibe voltaje y resistencia, DEVUELVE corriente.
float calcularCorriente(float v, float r) {
    return v / r;
}

// FUNCIÓN VOID
void mostrarResultado(float i) {
    cout << ">> La corriente calculada es: " << i << " Amperios." << endl;
}

// Función Principal
int main() {
    char opcion = 's'; // Variable de control

    // Bucle principal: MIENTRAS la opción sea "s", seguimos trabajando
    while(opcion == 's') {
        float v, r, resultado;

        cout << "Ingrese Voltaje: "; cin >> v;
        cout << "Ingrese Resistencia: "; cin >> r;

       // Llamamos a la función calcularCorriente
       resultado = calcularCorriente(v, r);

       // Llamamos a la función mostrarResultado
       mostrarResultado(resultado);

       // Actualizar variable de control
       cout << "¿Desea continuar? (s=Si / n=No): "; cin >> opcion;
    }

    cout << "Sistema apagado." << endl;
    return 0;
}