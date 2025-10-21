#include <iostream>
#include <string>
using namespace std;

int main() {

    string nombres[2][6] = {
        {"Jacinta", "Candido", "Teodosia", "Cristina", "Castulo", "Jervasia"},
        {"Epifanio", "Gaudelia", "Eufemia", "Eustaquio", "Brigida", "Meliton"}
    };

    int edades[2][6] = {
        {20, 19, 18, 21, 20, 19},
        {22, 18, 20, 21, 19, 23}
    };

    string buscado = "Cristina";
    bool encontrada = false;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (nombres[i][j] == buscado) {
                cout << "a idade de " << buscado << " e: " << edades[i][j] << " anos." << endl;
                encontrada = true;
            }
        }
    }

    if (!encontrada) {
        cout << "El nombre " << buscado << " no se encuentra en la lista." << endl;
    }

    return 0;
}
