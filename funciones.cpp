#include "stdio.h"
#include "iostream"
#include "string"
#include "cmath"

int calc(double num1, double num2){
    return pow(num1,num2);
}

int check(double num1, double num2){
    if(num1 == 0 || num2 == 0) return 0;
    else return calc(num1,num2);
}

using namespace std;

int main(int argc, char const *argv[]){
    double num=0;
    double res=0;
    system("clear");
    cout << "\n\t\tEste programa calculara el exponente del resultado anterior,";
    cout << "\n\t\tintroduce \033[1;31m0\033[0m para salir\n\n";
    cout << "\n\tIntroduce el primer numero a usar: ";
    cin >> res;
    while (res != 0) {
        cout << "\n\tIntroduce un numero: ";
        cin >> num;
        res=check(res,num);
        if (res !=0 ) cout << "\n\tEl resultado es: " << res << "\n";
        else if (res == 0) cout << "\n\t\033[1;31mSaliendo...\033[0m\n\n";
    }
    return 0;
}
