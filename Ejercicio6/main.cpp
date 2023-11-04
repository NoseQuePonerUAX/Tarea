#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    //Punteros de variables
    int x = 10;
    int* ptr = &x;
    std::cout << "Valor de x: " << std::endl;
    std::cout << "Valor a traves del puntero: " << *ptr << std::endl;
    *ptr = 20;
    std::cout << "Nuevo valor de x: " << x << std::endl;
    //Punteros y arrays
    int arr[5] = {1, 2, 3, 4, 5};
    ptr= arr;
    for (int i=0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *ptr << std::endl;
        ptr++;
    }
    //Asignación de memoria
    ptr= new int;
    *ptr = 42;
    std::cout << "Valor a traves del puntero: " << *ptr << std::endl;
    delete ptr;
    return 0;
}
