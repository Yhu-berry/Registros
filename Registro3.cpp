#include<iostream>
#include<string>
using namespace std;

struct PERSONA{
    string nombre;
    int diaN;
    int mesN;
    string yearN;
};

//Funcion para validar la fecha
bool valFe(int dia,int mes,string year);

//Funcion para hallar a un año bisiesto
bool esBisiesto(int year);

//Programa principal
int main(){
    int n;
    cout<<"Cantidad de personas: ";cin>>n;
    PERSONA personas[n];
    
    for(int i=0;i<n;i++){
    cout<<"Nombre de la persona "<<i+1<<": "; 
    cin>>personas[i].nombre;
    //Llamado a la funcion valFe 
        do{
            cout<<"Mes: ";cin>>personas[i].mesN;
            cout<<"Dia: ";cin>>personas[i].diaN;
            cout<<"Año: ";cin>>personas[i].yearN;
                if(!valFe(personas[i].diaN,personas[i].mesN,personas[i].yearN)){
                    cout<<"Fecha invalida"<<endl;
                }
            cout<<endl;
        }while(!valFe(personas[i].diaN,personas[i].mesN,personas[i].yearN));
    }

    //Numero de mes a buscar
    int mes;
    cout<<"Mes a buscar: ";cin>>mes;

    //Mostrar los datos de las personas que cumplan en ese mes
        for(int i=0;i<n;i++){
        if(mes!=0){
            if(personas[i].mesN==mes){
            cout<<personas[i].nombre<<"\t"<<personas[i].diaN<<"/"<<personas[i].mesN<<"/"<<personas[i].yearN<<endl;
            cout<<endl;
            }   
        }else
        cout<<"Ingreso 0, mes invalido";          
        }
    return 0;
}

//Funcion para validar la fecha
bool valFe(int dia,int mes,string year){
    if(year.length()!=4)
        return false;
    int y=stoi(year);
    if(mes>12 || mes<1 || dia<1)
        return false;
    switch(mes){
        case 2:
            if(esBisiesto(y)){
                if (dia>29)
                return false ;
            }else{
                if(dia>28)
                return false;
            }
            break;
        case 4:case 6:case 9:case 11:
            if (dia>30)
            return false;
            break;
        default:
            if(dia>31)
            return false;
    }
    return true;
}

//Funcion para hallar a un año bisiesto
bool esBisiesto(int year){
    return(year%4==0 && year%100!=0 || year%400==0);
}