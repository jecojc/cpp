#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char ticket;
    cout << "Ingrese El tipo de Ticket:  ";
    cin>> ticket;
    switch(ticket){
case 'a':
    cout<<"Acceso Completo"<<endl;
    cout<<"Bebidas Incluidas"<<endl;
    cout<<"Comidas Incluidas";
    break;
case 'b':
    cout<<"Bebidas Incluidas"<<endl;
    cout<<"Comidas Incluidas";
    break;
case 'c':
    cout<<"Bebidas Incluidas";
    break;
default:
    cout<<"acceso limitado";
    }
}
