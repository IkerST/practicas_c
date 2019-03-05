#include "stdio.h"
#include "iostream"

int main() {
    int inp;
    int end=0;
    int arr[30];
    int sum=0;
    int max=0;
    // Llenar variable con 0s
    for (int s=0; s < 30; s++) {
        arr[s]=0;
    }
    system("clear");
    std::cout << "\n\t\033[1mBienvenido, este programa sumara 30 numeros o menos y \n";
    std::cout << "\n\tmostrara el mayor\033[0m\n";
    do {
        std::cout << "\nIntroduzca un numero mayor a \033[1m0\033[0m, o \033[1m0\033[0m para salir: ";
        std::cin >> inp;
        if ( inp != 0 && end < 30) {
            end++;
            arr[30-end]=inp;
        } else if ( inp != 0 ) {
            for (int a=0; a < 29; a++) {
                arr[a-1]=arr[a];
            }
            arr[29]=inp;
        }
    } while ( inp != 0 );
    for (int i=0; i < 30; i++) {
        if (arr[i] > max) {
            max=arr[i];
        }
        sum+=arr[i];
    }
    std::cout << "\nLa suma es: \033[1;32m" << sum << "\033[0m\n";
    std::cout << "\nEl mayor es: \033[1;32m" << max << "\033[0m\n";
    return 0;
}