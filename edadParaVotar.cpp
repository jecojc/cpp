#include <iostream>

using std::cout;
using std::cin;

int main() {
    const int ageLimit=18; /*segun buenas practicas es mas seguro definir como constantes este tipo de variable */
    int age = 0;

    cout << "Ingrese edad  ";
    cin>> age;

    if (age >= ageLimit) {
        cout << "Ya puedes votar.";
    } else { // si la condicion no se cumple
        cout << "Eres menor de edad.";
    }
}
