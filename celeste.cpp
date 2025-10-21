#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string miClase[3][4] = {
        {"Juan", "María", "Pedro", "Ana"},
        {"Luis", "Carmen", "Celestino", "Marta"},
        {"Diego", "Lucía", "Andrés", "TuNombre"} 
    };

    cout << "Arreglo original:\n" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << miClase[i][j] << "\t";
        }
        cout << endl;
    }

    string buscado = "Celestino";
    string apellido = "Begerano"; 
    bool encontrado = false;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (miClase[i][j] == buscado) {
                miClase[i][j] = apellido;
                encontrado = true;
            }
        }
    }

    cout << "\nArreglo modificado (Celestino cambiado por su apellido):\n" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << miClase[i][j] << "\t";
        }
        cout << endl;
    }

    if (!encontrado) {
        cout << "\nEl nombre " << buscado << " no se encontro en el arreglo.\n";
    }

    return 0;
}
