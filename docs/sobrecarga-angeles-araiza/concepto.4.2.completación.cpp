// contador_inc_bug.cpp

//Completación de código
#include <iostream>
using namespace std;

class Contador {
private:
    int valor;
public:
    Contador(int v) : valor(v) {}
    Contador operator++(int) {
        Contador actual = *this; //guarda copia  
        valor++;                //incrementa valor
        return actual;          // devuelve copia
    }

    int get() const {return valor;}
};

int main() {
    Contador cnt(7);
    Contador old = cnt++;
    cout << "Old: " << old.get() << ", New: " << cnt.get() << endl;
}
