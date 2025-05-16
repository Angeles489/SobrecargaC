// empleado_io.cpp

//Completación de código
#include <iostream>
#include <string>
using namespace std;

class Empleado {
public:
    string nombre;
    int id;
    Empleado(string n, int i) : nombre(n), id(i) {}
    // COMPLETA: declara friend operator<<
    friend ostream& operator<<(ostream& os, const Empleado& e){
        //os <<"Nombre: "<<e.nombre<<"\nId:"<<e.id;
        os<<"Empleado ["<< e.id<<"]:"<<e.nombre;
        return os;
    }
};

int main() {
    Empleado e("Ana", 101);
    cout << e << endl;  // Empleado[101]: Ana
    return 0;
}
