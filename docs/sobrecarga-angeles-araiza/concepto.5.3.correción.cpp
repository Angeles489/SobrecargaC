// buffer_asign_bug.cpp

//Detección y correción de errores

#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
    char* datos;
public:
    Buffer(const char* s) {
        datos = new char[strlen(s) + 1];
        strcpy(datos, s);
    }
    ~Buffer() {delete[] datos; }
    Buffer& operator=(const Buffer& otro) {
        if (this != &otro) { 
            delete[] datos;  
            datos = new char[strlen(otro.datos)+1]; 
            strcpy(datos, otro.datos);                
        }
        return *this;
    }
    void print() const { cout << datos << endl;
    }
};
