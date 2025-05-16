// punto_eq_bug.cpp

//Aplicación directa
#include <iostream>
#include <string>
using namespace std;

class Empleado {
public:
    string nombre;
    int id;
    Empleado(string nombre, int id) : nombre(nombre), id(id) {}
    friend ostream& operator<<(ostream& os, const Empleado& e) {
        os<<"Nombre="<<e.nombre <<",Id="<<e.id;
        return os;
    }
};

int main() {
    Empleado uno("Leo", 21);
    Empleado dos("Mia", 22);

    cout << uno << endl;
    cout << dos << endl;
}
