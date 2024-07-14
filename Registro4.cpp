#include <iostream>
using namespace std;

//Registro de los atleta (nuevo tipo de datos)
    struct Atleta{
        string nombre;
        string pais;
        string disciplina;
        int Nmedallas;
    };

int main(){
    int n;
    cin>>n;
    Atleta atletas[n]; //arreglo de tipo Atleta

    for(int i=0; i<n;i++){
        cout<<"Nombre del atleta "<< i+1<<":\t";
        cin>>atletas[i].nombre;
        cout<<"Pais del atleta:\t";
        cin>>atletas[i].pais;
        cout<<"Disciplina del atleta:\t";
        cin>>atletas[i].disciplina;
        cout<<"Número de medallas del atleta:\t";
        cin>>atletas[i].Nmedallas;
        cout<<endl;
    }

    string EncontrarPais;
    cout<<"Pais a buscar: ";cin>>EncontrarPais;

    int Encontrados=0;

    //Variable del tipo Atleta
    Atleta atletaconMaxMed; 

    cout<<"Datos de los atleta de "<<EncontrarPais<<endl;

    //Buscar a los atletas del pais ingresado 
    for(int i=0;i<n;i++){
        if(atletas[i].pais==EncontrarPais){
            cout<<"Nombre del atleta:\t"<<atletas[i].nombre<<"\n";
            cout<<"Pais del atleta:\t"<<atletas[i].pais<<"\n";
            cout<<"Disciplina del atleta:\t"<<atletas[i].disciplina<<"\n";
            cout<<"Número de medallas del atleta:\t"<<atletas[i].Nmedallas;
            cout<<endl;
        }
        Encontrados++;
    }

    return 0;
}