#include <iostream>
int suma(int a, int b){
    return a + b; //+ usado para la suma
}
int resta(int a , int b){
    return a - b; //- usado para la resta
}
int multiplicacion(int a, int b){
    return a * b; //* usado para la multiplicacion
}
int division(int a, int b){
    return a % b; //% usado para la division
}
float residuo(int a, int b){
    return a % b; // se usa % para obtener el residuo en una division no exacta
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int edad;
    std::cout << "Dime su edad" << std::endl;
    std::cin >> edad;
    if(edad >= 18){
        std::cout << "Eres mayor de edad" << std::endl;
    }else{
        std::cout << "Eres menor de edad" << std::endl;
    }
    std::cout << "La suma es: " << suma(5, 5) << std::endl;
    std::cout << "La resta es: " << resta(10, 5) << std::endl;
    std::cout << "La multiplicacion es: " << multiplicacion(5, 5) << std::endl;
    std::cout << "La divisin es: " << division(50, 5) << std::endl;
    std::cout << "El residuo de la division es: " <<residuo(10, 3) << std::endl;
    int a;
    int b;
    std::cout << "Dame dos numeros" << std::endl;
    std::cin >> a;
    std::cin >> b;
    if(a==b){
        std::cout << "Son iguales" << std::endl;
    }
    if(a!=b){
        std::cout << "Son distintos" << std::endl;
    }
    if(a<b){
        std::cout << a << " Es menor que " << b << std::endl;
    }
    if(a>b){
        std::cout << a << " Es mayor que " << b << std::endl;
    }
    int x;
    int y;
    std::cout << "Dame otros dos numeros: " << std::endl;
    std::cin >> x;
    std::cin >> y;
    if(x<y && x !=0){//uso el && para relacionar dos condiciones y ! para señalar que x no es igual a 0
        std::cout << x << " Es menor que " << y << " y no es 0 " << std::endl;
    }
    return 0;
}