#include <iostream>
#include <cstdlib>

//Lo que quiero es parametrizar mis codigod para asi no tener
//la necesidad de estar guardando y compilando cada vez que
//quiera saber el promedio entre una pareja de numeros diferente
//ENTONCES NECESITO QUE MI PROGRAMA LEA DE LA LINEA DE COMANDOS

double average(double a, double b); 

int main(int argc, char *argv[]) // activacion de la lectura de comandos.
//argc: cuenta el numero de argumentos de ponen incluido el nombre del programa
//argv: guarda en cadenas de texto los numeros
{
    double x = std::atof(argv[1]);
    double y= std::atof(argv [2]);
    double z = 0;
    z = average(x, y);
    std::cout << z << std::endl;
    return 0;
}

double average(double  a, double b)
{
    double result = 0;
    result = 0.5*(a + b);
    return result;
}
//La Ventaja: Parametriza la implementacion del codigo para deferentes entradas
