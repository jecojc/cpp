#include <iostream>

using std::cout;
using std::cin;

int main(){

 int age=0;

 cout<<" Ingrese la Edad: ";
 cin>>age;

 ((age>=18) ? cout<<"Ya puedes Votar" : cout<<"Eres Menor de edad");

}
