//Datos de los empleados de DataTech
#include <iostream>
#include <string>
using namespace std;

struct empleado {
    string nombre;
    char sexo;
    double sueldo;
};

int main() {
    int n;
    cin >> n;

    empleado Empleados[n];

    for (int i = 0; i < n; ++i) {
        cout << "Nombre del empleado " << i + 1 << ": ";
        cin >> Empleados[i].nombre;
        cout << "Sexo del empleado (M/F) " << ": ";
        cin >> Empleados[i].sexo;
        cout << "Sueldo del empleado " << ": ";
        cin >> Empleados[i].sueldo;
    }

    int maySue=0;
    int meSue=0;
    //se ha de iterar desde 1 para no comparar el primer elemento consigo mismo
    for(int i=1;i<n;i++){
    if(Empleados[maySue].sueldo < Empleados[i].sueldo){
        maySue = i;
    }   
    if(Empleados[meSue].sueldo > Empleados[i].sueldo){
        meSue= i;
    }
    }
    //mostrar el sueldo mayor y el sueldo menor de los empleados 
    cout<<Empleados[maySue].sueldo<<endl;
    cout<<Empleados[meSue].sueldo<<endl;
    return 0;
}
