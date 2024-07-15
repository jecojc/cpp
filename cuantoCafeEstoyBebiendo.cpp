#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const double pi=3.14;

float base=0, radius=0, height=0, volume=0;

int main(){

    cout<<"Cuanto cafe estoy bebiendo?"<<endl;
    cout<<"Ingrese la base de su taza en cm:";
    cin>>base;
    cout<<"ingrese la altura de su taza en cm";
    cin>>height;

    radius=base/2;
    volume=(radius*radius)*height*pi;

    cout<<"estas bebiendo "<<volume<<"ml de cafe";

}
