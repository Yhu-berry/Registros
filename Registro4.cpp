#include <iostream>
using namespace std;

//Registro de los atleta
    struct Atleta{
        string nombre;
        string pais;
        string disciplina;
        int Nmedallas;
    };

int main(){
    int n;
    cin>>n;
    Atleta atletas[n];

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
    return 0;
}