#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int edad;
    std::cout<<"Dime su edad"<<std::endl;
    std::cin>>edad;
    if(edad>=18){
        std::cout<<"Eres mayor de edad"<<std::endl;
    }else{
        std::cout<<"Eres menor de edad"<<std::endl;
    }
    return 0;
}
