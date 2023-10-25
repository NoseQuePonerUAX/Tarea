#include <iostream>
int suma(int a,int b){
    return a + b;
}
int main() {
    int a;
    int b;
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"Dime un numero"<<std::endl;std::cin>>a;
    std::cout<<"Dime otro numero"<<std::endl;std::cin>>b;
    std::cout<<"La suma entre" <<a<<"y" <<b<< "es:"<<suma(a, b)<<std::endl;
    return 0;
}
