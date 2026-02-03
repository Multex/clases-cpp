#include <iostream>
#include <string>
using namespace std;

// ==========================================
// SEMANA 4: ESTRUCTURAS DE DATOS (STRUCTS)
// Definimos nuestro propio tipo de dato "Nave"
// ==========================================
struct Nave {
    string nombre;      // Texto (Ej: "Halcón")
    float combustible;  // Decimal (0 - 100)
    bool enMision;      // Lógica (true = Fuera, false = En base)
};

// ==========================================
// SEMANA 3: FUNCIONES (PROTOTIPOS)
// El "Orden" antes del caos.
// ==========================================
void mostrarMenu();
void registrarNave(Nave& n, int indice); // Paso por referencia (Bonus)
void reportarEstado(Nave n);

// ==========================================
// PROGRAMA PRINCIPAL
// ==========================================
int main() {
    // SEMANA 4: ARRAYS (La Flota)
    // Creamos un hangar para 3 naves.
    Nave flota[3]; 
    
    // SEMANA 1: VARIABLES
    int opcion = 0;
    bool sistemaActivo = true; 

    cout << "=== CENTRO DE COMANDO ORBITAL V1.0 ===" << endl;

    // SEMANA 3: BUCLE WHILE (Automatización)
    // El programa no se cierra hasta que nosotros queramos
    while (sistemaActivo) {
        
        mostrarMenu(); // Llamada a función void
        cout << "\n>> Ingrese orden: ";
        cin >> opcion;

        // SEMANA 2: CONDICIONAL SWITCH (Toma de decisiones)
        switch(opcion) {
            case 1: // OPCIÓN: REGISTRAR FLOTA
                cout << "\n--- INICIANDO REGISTRO DE FLOTA ---" << endl;
                
                // SEMANA 3: BUCLE FOR (Recorrer Array)
                for(int i = 0; i < 3; i++) {
                    cout << "\nConfigurando Nave #" << i+1 << ":" << endl;
                    
                    cout << "Nombre de la nave: ";
                    cin >> flota[i].nombre; // SEMANA 4: Acceso con punto (.)
                    
                    cout << "Nivel de Combustible (%): ";
                    cin >> flota[i].combustible;
                    
                    // SEMANA 2: VALIDACIÓN (If simple)
                    if(flota[i].combustible > 100) flota[i].combustible = 100;
                    if(flota[i].combustible < 0) flota[i].combustible = 0;
                    
                    flota[i].enMision = true; // Por defecto despegan
                }
                cout << "\n[INFO] Flota registrada y desplegada." << endl;
                break;

            case 2: // OPCIÓN: VER REPORTE
                cout << "\n--- REPORTE DE ESTADO DE FLOTA ---" << endl;
                cout << "----------------------------------" << endl;
                for(int i = 0; i < 3; i++) {
                    // Llamamos al experto en reportes
                    reportarEstado(flota[i]);
                }
                cout << "----------------------------------" << endl;
                break;

            case 3: // OPCIÓN: SALIR
                cout << "Cerrando sistema... Hasta luego, Comandante." << endl;
                sistemaActivo = false; // Rompemos el ciclo while
                break;

            default:
                cout << "[ERROR] Orden no reconocida." << endl;
        }
    }

    return 0;
}

// ==========================================
// IMPLEMENTACIÓN DE FUNCIONES (El detalle)
// ==========================================

void mostrarMenu() {
    cout << "\nMENU PRINCIPAL:" << endl;
    cout << "1. Registrar Naves (Input)" << endl;
    cout << "2. Ver Estado y Alertas (Output)" << endl;
    cout << "3. Salir del Sistema" << endl;
}

void reportarEstado(Nave n) {
    // Imprimimos datos básicos
    cout << "NAVE: " << n.nombre << " \t| FUEL: " << n.combustible << "%";

    // SEMANA 2: LÓGICA COMPLEJA (AND / OR)
    // Detectamos peligro automáticamente
    if (n.combustible < 20.0 && n.enMision == true) {
        cout << " <--- [ALERTA] RETORNO INMEDIATO!";
    } 
    else if (n.combustible == 100) {
        cout << " (Listo)";
    }
    
    cout << endl; // Salto de línea al final de cada nave
}