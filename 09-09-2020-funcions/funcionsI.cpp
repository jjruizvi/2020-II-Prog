#include <iostream> //para poder escribir en la pantalla

const int a = 20; //variable gobal constante NO NO NO usar variables globales (no constantes)
//la direccion de memoria a del as variables globLES ES DIFERESNTE AL DE LAS LOCALES

void print_message(int a)
{
    std::cout << "Hello world!\n";
    std::cout << "Parametro a: " << a << "\n";
    std::cout << "Direccion de a en print_message: " << &a << std::endl;
}

int main(void) // retur_type (tipo de dato que retorna) funcion_name(nombre sin palabras reservada) Parametros que recibe (tipo de dato y nombre del parametro)
{
    int a = 12;     //funcion body
    std::cout << "Direccion de a en main: " << &a << std::endl;
    print_message(a);
    return 0; //valor de retorno (el sitio donde aparesca el return hace que se salga de la funcion)
}
