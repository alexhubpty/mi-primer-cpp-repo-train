#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string miClase[3][4] = {
        {"David", "Dudu", "Liliana", "Diomed"},
        {"Ricardo", "lianis", "Celestino", "Joel"},
        {"Danna", "Cristina","Felix",  "Alex"}
    };
    cout << "Mi Clase (3x4):\n" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << miClase[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}
