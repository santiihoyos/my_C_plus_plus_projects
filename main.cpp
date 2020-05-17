#include <iostream>
#include <cmath>

double areaDeTrapecio(double ladoIzquierdo, double ladoDerecho, double base) {
    return ((ladoIzquierdo + ladoDerecho) / 2) * base;
}

// funcion f(x)=(x^2)+2
double f(double x) {
    return x * x + 2;
}

double integral(/*funcion */double puntoA, double puntoB, double error) {
    double areaTrapecio1 = areaDeTrapecio(f(puntoA), f(puntoB), puntoB - puntoA);
    double m = (puntoB - puntoA / 2);
    double areaTrapecio2 = areaDeTrapecio(f(puntoA), f(m), m - puntoA);
    double areaTrapecio3 = areaDeTrapecio(f(m), f(puntoB), m - (puntoA + m));
    double errorActual = std::abs(((areaTrapecio2 + areaTrapecio3) - areaTrapecio1));
    if (errorActual < error) {
        return areaTrapecio2 + areaTrapecio3;
    } else {

    }
    return 0;
}

int main() {
    return integral(-1, 1, 3);
}


