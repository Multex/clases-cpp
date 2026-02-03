#include <iostream>
using namespace std;

// --- Funciones ---
// Función para pedir datos
float leerSensor() {
    float t;
    cout << ">> Ingrese temperatura actual (°C): "; cin >> t;
    return t;
}

// Función de Lógica de Control
void verificarAlarma(float temp) {
    if(temp > 100) {
        cout << "[PELIGRO] !!! CRÍTICO - EVACUAR !!!" << endl;
    } else if (temp > 60) {
        cout << "[ALERTA] - Ventiladores Activados" << endl;
    } else {
        cout << "[NORMAL] Sistema estable" << endl;
    }
}

// --- Programa Principal ---
int main() {
    int contador = 0; // Para la estadística
    int encendido = 1; // Interruptor del while

    cout << "--- SISTEMA DE MONITORIO INICIADO ---" << endl;

    // Bucle while
    while(encendido == 1) {
        contador++; // Aumentamos cuenta de lecturas

        cout << "\n--- LECTURA #" << contador << " ---" << endl;

        // A. Llamamos a la función de pedir datos
        float temperatura = leerSensor();

        // B. Llamamos a la función de lógica
        verificarAlarma(temperatura);

        // C. Preguntamos si seguimos
        cout << "\n¿Realizamos nueva lectura? (1 = Sí / 0 = No): "; cin >> encendido;
    }

    cout << "--- FIN DE SESIÓN ---" << endl;
    cout << "Total de lecturas realizadas: " << contador << endl;

    return 0;
}