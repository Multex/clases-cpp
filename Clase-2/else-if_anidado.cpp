#include <iostream>
using namespace std;

int main(){
    int bateria;
    
    cout << "Ingrese nivel de batería (0-100): ";
    cin >> bateria;

    if(bateria < 20){
        cout << "[ROJO] Batería Crítica" << endl;
    } else if(bateria < 50){
        cout << "[AMARILLO] Batería media" << endl;
    } else {
        cout << "[VERDE] Batería cargada" << endl;
    }

    return 0;
}