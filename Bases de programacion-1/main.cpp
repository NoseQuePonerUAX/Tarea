#include <iostream>
#include <string>

int variableGlobal = 10;

void funcionLocal() {
    int variableLocal = 5;

    std::cout <<"Dentro de funcionLocal:" << std::endl;
    std::cout <<"VariableLocal= " << variableLocal << std::endl;
    std::cout <<"variableGlobal= " << variableGlobal << std::endl;
}

void otraFuncionLocal() {
    int variableLocal = 20;

    std::cout << "Dentro de otraFuncionLocal:" <<std::endl;
    std::cout << "variableLocal =" << variableLocal << std::endl;
    std::cout << "variableGlobal =" << variableGlobal << std::endl;
}

int main() {
    std::string nombre;
    int edad;

    std::cout << "Introduzca su nombre: ";
    std::cin >> nombre;

    std::cout << "Introduzca su edad: ";
    std::cin >> edad;

    std::cout << "Tu nombre es: " << nombre << std::endl;
    std::cout << "Tu edad es: " << edad << std::endl;

    int variableLocalMain = 15;

    std::cout << "Dentro de main: " << std::endl;
    std::cout << "variableLocalMain = " << variableLocalMain << std::endl;
    std::cout << "variableGlobal = " << variableGlobal << std::endl;

    if (variableLocalMain > 3) {
        int variableDentroDelIf = 15;
        std::cout << "Dentro del If: " << std::endl;
        std::cout << "variableDentroDelIf = " << variableDentroDelIf << std::endl;
    }

    for (int i = 0; i < 3; ++i) {
        int variableDentroDelBucle = i * 2;
        std::cout << "Dentro del bucle: " << std::endl;
        std::cout << "variableDentrDelBucle = " << variableDentroDelBucle << std::endl;
    }

    double otraVariableGlobal = 3.14;

    return 0;

}