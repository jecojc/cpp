#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    const int scoreLimit=12,assistanceLimit=25;
    char answer;
    float scoreOne=0, scoreTwo=0, scoreThree=0, scoreFour=0, average=0;
    float assistance=0, totalClass=0, compliancePercentage=0;
    do{
    cout<<"A continuacion Ingrese los valores de notas y asistencias "<<endl;
    cout<<"Primera Nota: ";
    cin>>scoreOne;
    cout<<"Segunda Nota: ";
    cin>>scoreTwo;
    cout<<"Tercera Nota: ";
    cin>>scoreThree;
    cout<<"Cuarta Nota: ";
    cin>>scoreFour;
    cout<<"Clases vistas por el estudiante: ";
    cin>>assistance;
    cout<<"Clases Totales del Curso ";
    cin>>totalClass;

    average=(scoreOne+scoreTwo+scoreThree+scoreFour)/4;
    compliancePercentage=(assistance/totalClass)*100;

    cout<<"Porcentaje de Asistencia: "<<compliancePercentage<<"%"<<endl;

    ((average>=scoreLimit && compliancePercentage>=assistanceLimit)? cout<<"Aprobaste con: "<<average<<endl : cout<<"reprobaste con: "<<average<<endl);
    ((average<scoreLimit && compliancePercentage>=assistanceLimit)? cout<<"Puedes Aplicar Recuperacion "<<endl : ((average<scoreLimit && compliancePercentage<assistanceLimit) ? cout<<"No calificas para recuperacion: "<<endl : cout<<"felicidades "<<endl));

    cout<<"Desea Evaluar Otro Estudiante y para si n para no : ";
    cin>>answer;
    cout<<"\n";
    }while(answer!='n');
}
