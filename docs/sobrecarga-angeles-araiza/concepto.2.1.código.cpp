//Aplicación directa
#include <iostream>
using namespace std;

class Punto {
public:
    int x, y;
    Punto(int x, int y) : x(x), y(y) {}
    bool operator==(const Punto& p) {
        return x==p.x && y==p.y;
    }
};

int main() {
    Punto p1(5,5), p2(5,5), p3(5,6);
    cout << std::boolalpha; // para devolver true y false, en lugar de 1 y 0
    cout << (p1==p2) << endl;  // true
    cout << (p1==p3) << endl;  // false
}
