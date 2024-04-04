// + Complete el constructor de la clase
// + Implemente los métodos de acceso: getName, SetName, getAge, SetAge
// Implemente el método bool isOlder() const, el cual verifica si el estudiante es mayor de edad
// Implemente la función principal, en la cual creará dos objetos de tipo Student, pedirá que ingresen los valores,
//  soltará los datos nombre y edad, y posteriormente imprimirá los datos e indicarám si son estudiants mayores de edad. 


#include <iostream>
#include "student.h"
using namespace std;

int main () {
    string name1, name2;
    int age1, age2;

    cout << "Ingrese el nombre y la edad del estudiante 1: ";
    cin >> name1; 
    cin >> age1;

    cout << "Ingrese el nombre y la edad del estudiante 2: ";
    cin >> name2; 
    cin >> age2;

    Student student1(name1, age1);
    Student student2(name2, age2);

    cout << "Datos del estudiante 1:" << endl;
    cout << "Nombre: " << student1.getName() << endl;
    cout << "Edad: " << student1.getAge() << endl;
    cout << "¿Es mayor de edad?: " << (student1.isOlder() ? "Si" : "No") << endl;

    cout << "Datos del estudiante 2:" << endl;
    cout << "Nombre: " << student2.getName() << endl;
    cout << "Edad: " << student2.getAge() << endl;
    cout << "¿Es mayor de edad?: " << (student2.isOlder() ? "Si" : "No") << endl;

    return 0;
}
