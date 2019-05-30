#include <iostream>

bool _esPrimo(int n) {
    for (int i =2; i <= n / 2 ; i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    int i;
    bool esPrimo = true;
    std::cout << "Introduzca un número entero: ";
    std::cin >> n;
    std::cout << "\n";
    
    esPrimo = _esPrimo(n);

    if(esPrimo) {
        std::cout << "El número: " << n << " es primo";
    } else {
        std::cout << "El número: " << n << " no es primo";
    }

    std::cout << "\n";

    return 0;
}
