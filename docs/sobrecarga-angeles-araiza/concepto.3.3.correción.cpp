// empleado_io_bug.cpp

//Correción de errores
#include <iostream>
using namespace std;

class Empleado {
    
public:
    string nombre; // declarar las variables dentro 
    int id;
    
    Empleado(string n, int i) : nombre(n), id(i) {}
    friend ostream& operator<<(ostream& os, const Empleado& e) { // devolver ostream&
        os << "ID=" << e.id << ", Nombre=" << e.nombre;
        return os;
    }
};

int main() {
    Empleado e("Ana", 101);
    cout << e << endl;  // Empleado[101]: Ana
    return 0;
}
