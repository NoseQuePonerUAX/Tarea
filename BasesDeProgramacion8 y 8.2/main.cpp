#include <iostream>
#include<string>

const float PI=3.141;


void Hola(){
    std::cout << "¡Hola Mundo!" << std::endl;
}
using RADIO = float;
int main() {
    Hola();
    RADIO radio;
    std::cout << "Digame un radio:" << std::endl;std::cin>>radio;
    float area= PI*radio*radio;
    std::cout << "El area del circulo segun el radio " << radio<<" es "<<area<<std::endl;

    return 0;
}
