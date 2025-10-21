#include <iostream>
using namespace std;

int main() {

    int edades[2][6];

    cout << "Ingrese las edades de 12 companeros de clase:\n" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
    
            if (i * 6 + j < 12) {
                cout << "Edad del companero " << (i * 6 + j + 1) << ": ";
                cin >> edades[i][j];
            } else {
                edades[i][j] = 0;
            }
        }
    }

    cout << "\nLista de edades en arreglo 2x6:\n" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << edades[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
