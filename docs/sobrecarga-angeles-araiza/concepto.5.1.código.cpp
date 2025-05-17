// Aplicación del código

#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
    char* datos;
    size_t n;
public:
    Buffer(const char* s) {
        n=strlen(s);
        datos=new char[n + 1];
        strcpy(datos, s);
    }
    ~Buffer() {   delete[] datos;
    }
    Buffer& operator=(const Buffer& otro) {
        if (this != &otro) {delete[] datos; 
            n=otro.n;
            datos=new char[n+1];
            strcpy(datos, otro.datos);
        }
        return *this;
    }

    void print() const { cout << datos << endl;
    }
};

int main() {
    Buffer b1("Hola"), b2("Mundo");
    cout << "Antes:" << endl;
    b1.print(); // Hola
    b2.print(); // Mundo
    b1 = b2;
    cout << "Después:" << endl;
    b1.print(); // Mundo
    b2.print(); // Mundo
}
