#include<iostream>
#include<string>
using namespace std;

struct persona{
    string nombre;
    int diadeNacimiento;
    int mesdeNacimiento;
    int yeardeNacimiento;
};

int main(){
    int n;
    cout<<"Cantidad de personas: ";cin>>n;
    persona personas[n];

    for(int i=0;i<n;i++){
    cout<<"Nombre de la persona "<<i+1<<": "; 
    cin>>personas[i].nombre;
    cout<<"Mes: ";cin>>personas[i].mesdeNacimiento;
    cout<<"Dia: ";cin>>personas[i].diadeNacimiento;
    cout<<"Año: ";cin>>personas[i].yeardeNacimiento;
    }

    //Numero de mes a buscar
    int mes;

    //Mostrar los datos de las personas que cumplan en ese mes
    cout<<"Mes a buscar: ";cin>>mes;
    for(int i=0;i<n;i++){
        if(personas[i].mesdeNacimiento==mes){
            cout<<personas[i].nombre<<endl;
            cout<<personas[i].diadeNacimiento<<"/"<<personas[i].mesdeNacimiento<<"/"<<personas[i].yeardeNacimiento<<endl;
            cout<<endl;
        }
    }
    return 0;
}
