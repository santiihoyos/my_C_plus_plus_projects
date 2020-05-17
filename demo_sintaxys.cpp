#include <iostream>
#include <cmath>

const double PI = 3.1416;

int prints = 0;

void print(const int x) {
    std::cout << int(prints++) << " - Resultado: " << x << std::endl;
}

int main() {
    //00000000 00001000
    unsigned char x = 00000000;
    print(x);
    for (int i = 0; i <= 4; i++) {
        x = 1 << i;
        print(x);
        for (int j = 0; j < int(pow(2, i) - 1); j++) {
            if ()
            x = ;
            print(x);
        }
    }
    return 0;
}