#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

int main(int argc, char const *argv[]) {
  std::string rep ="s";
  while (rep=="s") {
    std::string stop="n";
    int num_mat=0;
    system("clear");
    std::cout << "\n\tEn este programa se calculara el promedio de las materias introducidas\n\ty se mostrara al final el promedio, junto con las calificaciones introducidas.\n";
    std::cout << "\nIntroduce el numero de materias: ";
    std::cin >> num_mat;
    num_mat=num_mat-1;
    float cal[num_mat+1];
    std::string nom_mat[num_mat+1];
    float sum;
    float prom;
    for (size_t i = 0; i <= num_mat; i++) {
      std::cout << "Introduce el nombre de la materia (sin espacios)" << i+1 << ":";
      std::cin >> nom_mat[i];
      std::cout << "Introduce la calificacion del la materia " << i+1 << ":";
      std::cin >> cal[i];
    }
    for (size_t i = 0; i <= num_mat; i++) {
      std::cout << nom_mat[i] << ":\033[1m " << cal[i] << "\033[0m\n";
    }
    for (size_t i = 0; i <= num_mat; i++) {
      sum +=cal[i];
    }
    prom=sum/(num_mat+1);
    std::cout << "\nEl promedio es de : \033[1m" << prom << "\033[0m\n";
    std::cout << "\nDesea volver al inicio? \033[1m(s,n)\033[0m:";
    std::cin >> rep;
  }
  return 0;
}