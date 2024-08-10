#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int month;
    cout << "Ingrese el numero de mes:  ";
    cin>> month;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "El mes tiene 31 dias.";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "El mes tiene 30 dias.";
            break;
        case 2:
            cout << "El mes tiene 28 o 29 dias.";
            break;
        default:
            cout << "Ingrese un numero de mes valido desde 1 hasta 12";
    }
}
