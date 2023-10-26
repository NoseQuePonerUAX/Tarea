#include <iostream>
enum Dia{Lunes,Martes,Miercoles,Jueves,Viernes,Sabado,Domingo};

int main(int argc,char* argv[]) {
    Dia cita;
    cita=Miercoles;
    if (cita== Miercoles){
        std::cout<<"Tiene una cita el Miercoles"<<std::endl;
    }else{
        std::cout<<"No tienes cita el Miercoles"<<std::endl;
    }



    return 0;
}
