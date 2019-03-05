#include "stdio.h"
#include "iostream"
#include "string.h"
#include "fstream"

int main(int argc, char const *argv[]) {
    system("clear");
    std::cout << "\n\tBienvenido, presione \033[1mCTRL+C\033[0m para salir\n";
    std::string user;
    std::string passwd;
    std::string user_inp;
    std::string passwd_inp;
    std::ifstream credentials("credentials.txt");
    getline(credentials,user);
    getline(credentials,passwd);
    int intentos=0;
    bool success=false;
    do {
        std::cout << "\nPorfavor introduzca su usuario: ";
        std::cin >> user_inp;
        if ( user_inp == user ) {
            std::cout << "\nPorfavor introduzca su password: ";
            std::cin >> passwd_inp;
            if ( passwd_inp == passwd ) {
                std::cout << "\n\033[1;32mAccesso Concedido\033[0m\n\n";
                success=true;
                break;
            } else {
                std::cout << "\n\033[1;33mPassword Incorrecto\033[0m\n\n";
                intentos++;
            }
        } else {
            std::cout << "\n\033[1;33mUsuario Incorrecto\033[0m\n\n";
            intentos++;
        }
    } while ( intentos < 6);
    if ( success != true ) {
        std::cout << "\n\033[1;31mAccesso Denegado\033[0m\n\n";
    }
    return 0;
}