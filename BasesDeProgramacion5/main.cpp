#include <iostream>
#include <cstdarg>
int suma(int a,int b){
    return a + b;
}
void Mostrar(){
    std::cout<<"Mostrar este mensaje"<<std::endl;
}
void homonimo(int num){   //las funciones homonimas sirven para dar dos tipos de valores diferentes a un nombre
    std::cout<<"La funcion int nos devuelve:"<<num<<std::endl;
}
void homonimo(double num){
    std::cout<<"La funcion double nos devuelve:"<<num<<std::endl;
}
int restar(int arg,...){
    int resta=arg;
    va_list args;
    va_start(args,arg);

    for (int i=1; i< arg;i++){
        int valor=va_arg(args,int);
        resta -= valor;
    }
    va_end(args);
    return resta;
}
int factorial(int n){
    if (n==0){
        return 1;
    }else{
        return n* factorial(n-1);
    }
}
int main() {
    int a;
    int b;
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"Dime un numero"<<std::endl;std::cin>>a;
    std::cout<<"Dime otro numero"<<std::endl;std::cin>>b;
    std::cout<<"La suma entre " <<a<<" y " <<b<< " es:"<<suma(a, b)<<std::endl;
    Mostrar();
    std::cout<<"Funciones homonimas:"<<std::endl;
    homonimo(5);
    homonimo(1.23);
    std::cout<<"Variable argumento:"<<std::endl;
    int resultado = restar(4,9,2,3);
    std::cout<<"La resta es "<< resultado<<std::endl;
    int NUM;
    std::cout<<"Dame un numero para calcular su factorial:"<<std::endl;
    std::cin>>NUM;
    if( NUM<0){
        std::cout<<"El factorial no puede ser dado por numeros negativos"<<std::endl;

    }else{
        int Resultado=factorial(NUM);
        std::cout<<"El factorial de "<<NUM<<" es "<<Resultado<<std::endl;

    }


    return 0;
}
