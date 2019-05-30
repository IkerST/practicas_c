#include <stdio.h>
#include <iostream>
#include <string>
#include <convert.h>
 
int clean () {
	#ifdef _WIN32
		system("cls");
	#endif
	#ifdef linux
		system("clear");
	#endif
	return 0;
}
 
int error () {
	std::cout << "Introduzca un valor valido";
	return 0;
}
 
int pausa () {
    #ifdef _WIN32
        system("pause")
    #endif
    #ifdef linux
        system("read -n1 -r -p 'Pressiona cualquier tecla para continuar...' key");
    #endif
    return 0;
}
 
int main(int argc, char const *argv[]){
    const char *tabfull[][30][3] = { //Codigo,Descripcion,Precio
        {"101","Coca-Cola","13.00"},
        {"102","Corona","18.00"},
        {"103","Fanta","12.00"},
        {"104","Sabritas","11.00"},
        {"105","Rufles","16.00"},
        {"106","Maruchan","10.00"},
        {"107","Doritos","17.00"},
        {"108","Dr Pepper","19.00"},
        {"109","Pepsi","12.00"},
        {"110","7-UP","14.00"},
        {"111","Fresca","16.00"},
        {"112","Pizza","119.00"},
        {"113","Tortillas","11.50"},
        {"114","Paleta","2.50"},
        {"115","Peñafiel","11.99"},
        {"116","Galletas","16.80"},
        {"117","Salsa Tabasco","29.00"},
        {"118","Valentina","25.00"},
        {"119","Snikers","16.00"},
        {"120","Milkyway","17.00"},
        {"121","Chocolate Blanco","21.00"},
        {"122","Chocolate Amargo","26.00"},
        {"123","Ketchup","18.00"},
        {"124","Arroz","27.50"},
        {"125","Pan de Caja","26.00"},
        {"126","Leche","29.00"},
        {"127","Café soluble","54.00"},
        {"128","Atun","39.00"},
        {"129","Spagetti","26.00"},
        {"130","Cereal","48.00"}
    };
    double tab[30] = {13.00, 18.00, 12.00, 11.00, 16.00, 10.00, 17.00, 19.00, 12.00, 14.00, 16.00, \
    119.00, 11.50, 2.50, 11.99, 16.80, 29.00, 25.00, 16.00, 17.00, 21.00, 26.00, 18.00, 27.50, 26.00, 29.00, 54.00, \
    39.00, 26.00, 48.00};
    std::string entr_conf;
    int clientes;
    std::string prod_sel;
    int prod_sel_int;
    bool continuar;
    std::string double_conv;
    double prod_prec;
    double res;
 
    clean();
    std::cout << "\t\t\t\t===========================\t\t\t\t\n";
    std::cout << "\t\t\t\t=  Bienvenido a Wallmart  =\t\t\t\t\n";
    std::cout << "\t\t\t\t===========================\t\t\t\t\n";
    pausa();
    clean();
    std::cout << "\n\n\t\tVan a entrar clientes? (s,n)  ";
    std::cin >> entr_conf;
    while (entr_conf == "s" || entr_conf == "S" || entr_conf == "si" \
    || entr_conf == "Si" || entr_conf == "SI") {
        while ((entr_conf == "s" || entr_conf == "S" || entr_conf == "si" \
        || entr_conf == "Si" || entr_conf == "SI")&& prod_sel_int != 999) {
            clean();
            prod_prec=0;
            std::cout << "\n\n\t\tSeleccione un producto e introduzca el codigo del mismo.";
            std::cout << "\n\t\tIntroduzca '999' cuando termine";
            std::cout << "\n\t\t==============================================================================";
            std::cout << "\n\t\t== Codigo == Descripcion ==  Precio == Codigo == Descripcion      == Precio ==";
            std::cout << "\n\t\t== 101    == Coca-Cola   ==  $13.00 == 116    == Galletas         == $16.80 ==";
            std::cout << "\n\t\t== 102    == Corona      ==  $18.00 == 117    == Salsa Tabasco    == $29.00 ==";
            std::cout << "\n\t\t== 103    == Fanta       ==  $12.00 == 118    == Valentina        == $25.00 ==";
            std::cout << "\n\t\t== 104    == Sabritas    ==  $11.00 == 119    == Snikers          == $16.00 ==";
            std::cout << "\n\t\t== 105    == Rufles      ==  $16.00 == 120    == Milkyway         == $17.00 ==";
            std::cout << "\n\t\t== 106    == Maruchan    ==  $10.00 == 121    == Chocolate Blanco == $21.00 ==";
            std::cout << "\n\t\t== 107    == Doritos     ==  $17.00 == 122    == Chocolate Negro  == $16.00 ==";
            std::cout << "\n\t\t== 108    == Dr Pepper   ==  $19.00 == 123    == Ketchup          == $18.00 ==";
            std::cout << "\n\t\t== 109    == Pepsi       ==  $12.00 == 124    == Arroz            == $27.50 ==";
            std::cout << "\n\t\t== 110    == 7-UP        ==  $14.00 == 125    == Pan de Caja      == $26.00 ==";
            std::cout << "\n\t\t== 111    == Fresca      ==  $16-00 == 126    == Leche            == $29.00 ==";
            std::cout << "\n\t\t== 112    == Pizza       == $119.00 == 127    == Cafe Soluble     == $54.00 ==";
            std::cout << "\n\t\t== 113    == Tortillas   ==  $11.50 == 128    == Atun             == $39.00 ==";
            std::cout << "\n\t\t== 114    == Paleta      ==   $2.50 == 129    == Spagetti         == $26.00 ==";
            std::cout << "\n\t\t== 115    == Peñafiel    ==  $11.99 == 130    == Cereal           == $48.00 ==";
            std::cout << "\n\t\t==============================================================================\n";
            std::cin >> prod_sel_int;
            /*if (prod_sel != "FIN"){
                prod_sel_int=std::stoi(prod_sel);
            } 
            double_conv=tab[prod_sel][3];
            prod_prec=convertToDouble(double_conv);*/
            if (prod_sel_int != 999) {
                prod_sel_int=prod_sel_int-101;
                prod_prec=tab[prod_sel_int];
                std::cout << prod_prec;
                res+=prod_prec;
            }
            
            
 
            //pausa();
        }
        clean();
        std::cout << "Son: " << res << " pesos";
        clientes++;
        std::cout << "\n\n\t\tHubieron " << clientes << " hoy";
        std::cout << "\n\n\t\tVan a entrar clientes? (s,n)  ";
        std::cin >> entr_conf;
    };
    return 0;
}
