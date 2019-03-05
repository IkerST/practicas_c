#include "stdio.h"
#include "iostream"
#include "string.h"

int compare(const char *txt1, const char *txt2) {
    if ( strcmp(txt1, txt2) == 0 ) {
    //if ( txt1 == txt2 ) {
        std::cout << "\n\033[1;32mLas palabras introducidas son iguales\033[0m\n\n";
    } else {
        std::cout << "\n\033[1;31mLas palabras introducidas no son iguales\033[0m\n\n";
    }
    return 0;
}

int main() {
    system("clear");
    std::cout << "\n\tBienvenido, presione \033[1mCTRL+C\033[0m para salir\n";
    do {
        char var1[30];
        char var2[30];
        std::cout << "\nIntroduce una palabra a comparar: ";
        std::cin >> var1;
        std::cout << "\nIntroduce la seguda palabra a comparar: ";
        std::cin >> var2;
        compare(var1, var2);
    } while (true);
    return 0;
}