#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> split(std::string strToSplit, char delimeter){
    std::stringstream ss(strToSplit);
    std::string item;
	std::vector<std::string> splittedStrings;
    while (std::getline(ss, item, delimeter))
	{
		splittedStrings.push_back(item);
    }
	return splittedStrings;
}

int main() {
    std::string nombre_adulto;
    std::string nombre_hijo;
    std::string padre_madre;
    std::string rep;
    do {
    system("clear");
    std::cout << "Introduzca su nombre completo: (primero apellidos y después su nombre) \n";
    std::getline(std::cin, nombre_adulto);
    std::vector<std::string> nombre_adulto_split = split(nombre_adulto, ' ');
    
    std::cout << "\nIntroduzca el nombre completo de su hijo: (primero apellidos y después su nombre) \n";
    std::getline(std::cin, nombre_hijo);
    std::vector<std::string> nombre_hijo_split = split(nombre_hijo, ' ');
    
    std::cout << "\n¿Es el Padre o la Madre?\n";
    std::cin >> padre_madre;

    if ( padre_madre == "padre" || padre_madre == "Padre" || padre_madre == "PADRE" ) {
        if ( nombre_adulto_split[1] == nombre_hijo_split[1] ) {
            std::cout << "Se verifico que es su hijo\nPuede llevarse a su hijo\n"; 
        } else {
            std::cout << "No se verifico que sea su hijo\nNo se lo puede llevar\n";
        }
    } else if ( padre_madre == "madre" || padre_madre == "Madre" || padre_madre == "MADRE" ) {
        if ( nombre_adulto_split[2] == nombre_hijo_split[2] ) {
            std::cout << "Se verifico que es su hijo\nPuede llevarse a su hijo\n"; 
        } else {
            std::cout << "No se verifico que sea su hijo\nNo se lo puede llevar\n";
        }
    }

    std::cout << "Desea Volver a ejecutar el programa? (Si,No)";
    std::cin >> rep;
    } while ( rep == "si" || rep == "Si" || rep == "S" || rep == "s") ;
    return 0;
}