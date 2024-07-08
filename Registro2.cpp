//pide datos de n personas
#include <iostream>
using namespace std;

struct persona{
    string nombre;
    string DNI;
    int edad;
};

int main(){
    int n;
    cin>>n;
    persona personas[n];
    int cantdePersonasMayores=0;
    int sumadeEdades=0;

    // Datos de las personas
    for(int i=0;i<n;i++){
        cout<<"Nombre de la persona "<<i+1<<": ";
        cin>>personas[i].nombre;
        cout<<"DNI: ";
        cin>>personas[i].DNI;
        cout<<"Edad: ";
        cin>>personas[i].edad;
    }
    
    //hallar la cantidad de personas mayores a 50 años y el promedio de las edades
    for(int i=0;i<n;i++){
        if(personas[i].edad>50){
            cantdePersonasMayores++;
        }
        sumadeEdades+=personas[i].edad;
    }

    //Mostrar los resultados
    cout<<"Hay "<<cantdePersonasMayores<<" personas mayores a 50 años"<<endl;
    cout<<"Promedio de las edades: "<<sumadeEdades/n<<endl;
    return 0;

}