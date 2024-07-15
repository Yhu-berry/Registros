/*Programa que solicita datos personales, halla la cantidad de personas mayores y 
el promedio de las edaees introducidas*/

#include <iostream>
#include <string>// Necesario para delimitar la longitud de una cadena
using namespace std;

//Registro de las personas
struct PERSONA{
    string nombre;    
    string DNI;
    int edad;
};

//Funcion para delimitar los digitos introducidos del DNI a 8
void LimitarDNI(string& DNI);

int main(){
    int n;
    cout<<"Numero de personas: ";
    cin>>n;
    cin.ignore(); //Como se a introducido un numero se desea ignorar una linea pendiente

    PERSONA personas[n]; //Arreglo del tipo PERSONA
    int cantMay=0;
    int sumE=0;

    //Solicita datos personales
    for(int i=0;i<n;i++){
        cout<<"Nombre de la persona "<<i+1<<": ";    
        /*getline(input,str) siendo cin lo comun para <iostream> ya que se va a leer desde cin, 
        str es donde se va almacenar la linea que se ha leido ya que se uso <string>, 
        por tanto lo que se almaceno en este caso es una cadena*/
        getline(cin,personas[i].nombre);
        LimitarDNI(personas[i].DNI);
        cout<<"Edad: ";
        cin>>personas[i].edad;
        cin.ignore(); 
        cout<<"\n";
    }
    
    //Halla la cantidad de personas mayores a 50 años y suma de edades
    for(int i=0;i<n;i++){
        if(personas[i].edad>50){
            cantMay++;
        }
      
        sumE+=personas[i].edad;
    }

    //Mostrar los resultados
    if(cantMay==1)
    cout<<"Hay "<<cantMay<<"una persona mayor a 50 años"<<endl;
    else if(cantMay>1)
    cout<<"Hay "<<cantMay<<" personas mayores a 50 años"<<endl;
    else 
    cout<<"No hay personas mayores a 50 años"<<endl;
    cout<<"Promedio de las edades: "<<sumE/n;

    //Datos de las personas ingresadas 
    cout<<"\nDatos de las personas ingresadas:\n";
    for(int i=0;i<n;i++){
      cout<<personas[i].nombre<<"\t"<<personas[i].DNI<<"\t"<<personas[i].edad<<" años";
      cout<<endl;
    }
    return 0; 
}

//Funcion que delimita los digitos a ingresar a solo 8 y ofrece 2 intentos mas
void LimitarDNI(string& DNI){
    int cont=0;
    while(cont<3){
        cout<<"DNI: ";
        cin>>DNI;

        if(DNI.length()==8){
            return;
        }else {
            cout<<"Intente otra vez"<<endl; 
        }
        cont++;
    }
     cout<<"Supero los intentos ofrecidos"<<endl;
     exit(0);
}
