// complejo_bug.cpp
//Correción y detección de errores

#include <iostream>
using namespace std;


class Complejo {
public:
 double re, im;
 Complejo(double r, double i) : re(r), im(i) {}
 // BUG: firma incorrecta y falta const
 Complejo operator+(const Complejo& otro) {
     return Complejo(re + otro.re, im + otro.im);
 }
};

int main(){
    Complejo c1(2.5,3.3), c2(3.1,2.6);
    Complejo suma= c1+c2;
    cout<<"Resultado("<<suma.re<<","<<suma.im<<")"<<endl;
    return 0;
}
