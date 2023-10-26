#include <iostream>
int suma(int a, int b){
    return a + b;
}
int resta(int a, int b){
    return a - b;
}
int main() {
    //Aritmética de los punteros
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    std::cout << "Elemento 0: " << *ptr << std::endl;
    ptr++;
    std::cout << "Elemento 1: " << *ptr << std::endl;
    ptr += 2;
    std::cout << "Elemento 3: " << *ptr << std::endl;
    //Punteros de punteros
    int x = 10;
    int* ptr1 = &x;
    int** ptr2 = &ptr1;
    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Valor a traves de ptr1: " << *ptr1 << std::endl;
    std::cout << "Valor a traves de ptr2: " << **ptr2 << std::endl;
    //Punteros de funciones
    int (*operacion) (int a, int b);
    operacion = suma;
    int resultado = operacion(11, 13);
    std::cout << "Resultado de la suma: " << resultado << std::endl;
    operacion = resta;
    resultado = operacion(11, 13);
    std::cout << "Resultado de la resta: " << resultado << std::endl;
    return 0;
}
