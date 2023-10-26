#include <iostream>

    int main() {
        std::cout << "Hello, World!" << std::endl;
        for(int i=1;i<=10;i++){
            std::cout<<i<<std::endl;
        }
        int numero;
        std::cout<<"ingrese un numero:";
        std::cin>>numero;
        std::cout<<"Tabla de multiplicar del "<<numero<<"\n";
        int multiplicador=1;
        while(multiplicador<=10){
            int resultado=numero*multiplicador;
            std::cout<<numero<<"x"<<multiplicador<<"="<<resultado<<std::endl;
            multiplicador++;
        }
        int Numero;
        std::cout<<"ingrese un numero"<<std::endl;
        std::cin>>Numero;
        int Multiplicador=1;
        do{
            int Resultado=Numero*Multiplicador;
            std::cout<<Numero<<"x"<<Multiplicador<<"="<<Resultado<<std::endl;
            Multiplicador++;

        }while(Multiplicador <=10);


            return 0;
    }
