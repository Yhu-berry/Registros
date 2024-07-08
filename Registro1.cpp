#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    char sexo;
    double sueldo;
};

int main() {
    int n;
    cin >> n;

    Empleado empleados[n];

    for (int i = 0; i < n; ++i) {
        cout << "Nombre del empleado " << i + 1 << ": ";
        cin >> empleados[i].nombre;
        cout << "Sexo del empleado (M/F) " << ": ";
        cin >> empleados[i].sexo;
        cout << "Sueldo del empleado " << ": ";
        cin >> empleados[i].sueldo;
    }

    return 0;
}
