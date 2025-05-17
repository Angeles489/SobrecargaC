//Aplicación directa

#include <iostream>
using namespace std;

class Contador {
public:
    int c;
    Contador(int c) : c(c) {}
    Contador operator++(int) {
        Contador nuevo = *this;
        c++;
        return nuevo;
    }

    int get() const {
        return c;
    }
};

int main() {
    Contador c(8);
    Contador anterior = c++;  
    cout << "Previo : " << anterior.get() << " Actual: "<<c.get()<<endl;
    return 0;
}
