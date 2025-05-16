// contador_inc_bug.cpp

//Detección y correción de errores
#include <iostream>
using namespace std;

class Contador {
    int valor;
public:
    Contador(int v) : valor(v) {}
    Contador operator++(int) {
        Contador actual = *this;  
        valor++;                
        return actual;       // el bug es que se retorna el mismo valor, sin ningun cambio     
    }

    int get() const {
        return valor;
    }
};

int main() {
    Contador cnt(7);
    Contador old = cnt++;
    cout << "Old: " << old.get() << ", New: " << cnt.get() << endl;
}
