/*Programa que solicita datos personales, halla la cantidad de personas mayores y 
el promedio de las edaees introducidas*/

#include <iostream>
#include <string>// Necesario para delimitar la longitud de una cadena
using namespace std;

//Registro
struct persona{
    string nombre;    
    string DNI;
    int edad;
};

//Funcion para delimitar los digitos introducidos del DNI a 8
void LimitarDNI(string& DNI);

int main(){
    int n;
    cin>>n;
    persona personas[n];
    int cantdePersonasMayores=0;
    int sumE=0;

    //Solicita datos personales
    for(int i=0;i<n;i++){
        cout<<"Nombre de la persona "<<i+1<<": ";
        cin>>personas[i].nombre;
        LimitarDNI(personas[i].DNI);
        cout<<"Edad: ";
        cin>>personas[i].edad;
        cout<<"\n";
    }
    
    //Halla la cantidad de personas mayores a 50 años y suma de edades
    for(int i=0;i<n;i++){
        if(personas[i].edad>50){
            cantdePersonasMayores++;
        }
        /*sumE: Suma de edades*/
        sumE+=personas[i].edad;
    }

    //Mostrar los resultados
    cout<<"Hay "<<cantdePersonasMayores<<" personas mayores a 50 años"<<endl;
    cout<<"Promedio de las edades: "<<sumE/n<<endl;
    return 0;
}

void LimitarDNI(string& DNI){
    while(true){
        cout<<"DNI: ";
        cin>>DNI;
        if(DNI.length()==8)
            break;
        else 
            cout<<"Intente otra vez "<<endl;
    }
}
