#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
const int numeroDeEstudiantes=3;
const int numeroDeNotas=4;
string nombres[numeroDeEstudiantes];
int notas[numeroDeEstudiantes][numeroDeNotas];


// codigo de carga
for(int j=0;j<numeroDeEstudiantes; j++) // ciclo de filas
{
    cout<<" Ingrese el nombre del estudiante  "<<j+1<<endl;
    cin.ignore();
    getline(cin, nombres[j]);
    for(int i=0;i<numeroDeNotas;i++)  //ciclo de columnas
    {
        cout<<"ingrese la nota " << i+1 <<" : ";
        cin>>notas[j][i];
    }
}

//codigo de mostrar
float promedioGeneral=0;
for(int j=0;j<numeroDeEstudiantes; j++) // ciclo de filas
{
    float suma=0;
    float promedio=0;
    cout<<" \n Notas del Estudiante " <<nombres[j]<<endl;
    for(int i=0; i<numeroDeNotas; i++)  //ciclo de columnas
    {
        cout<<notas[j][i]<<" - ";
        suma+=notas[j][i];
    }
    promedio=suma/numeroDeNotas;
    cout<<"\n su promedio es de : "<<promedio<<endl;
    promedioGeneral+=promedio;
}
promedioGeneral/=numeroDeEstudiantes;
cout<< " \n promedio general de clase es de: "<<promedioGeneral;


}
