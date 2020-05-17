#include <iostream>

int calculaMaximo(int numero1, int numero2) {
    if (numero1 > numero2) {
        return numero1;
    } else {
        return numero2;
    }
}

int pideNumero(){
    int numero;
    std::cout << "Introduce un número:";
    std::cin >> numero;
    return numero;
}

int main() {
    int numero1 = pideNumero();
    int numero2 = pideNumero();
    int numero3 = pideNumero();
    std::cout << "El número " << calculaMaximo(calculaMaximo(numero1, numero2), numero3) << " es el mayor.";
    return 0;
}


