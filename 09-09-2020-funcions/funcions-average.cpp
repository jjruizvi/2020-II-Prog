#include <iostream>

double average(const double & a, double b); //estoy pasando a "a" por referencia (ventaja:no se crean elementos nuevos, desventaja:las variables pueden ser modificadas localmente la variable original)

int main(void)
{
    double x = 9.8, y= -10.76, z = 0;
    std::cout << "valor de x:" << x << std::endl;
    z = average(x, y);
    std::cout << z << std::endl;
    std::cout << "main:" << &x << std::endl;
    std::cout << "valor de x despues de average:" << x << std::endl;
    return 0;
}

double average(const double & a, double b)
{
    double result = 0;
    result = 0.5*(a + b);
    std::cout << "average:" << &a << std::endl;
    //a = 25.768543; //ERROR estaria tratando de asignarle un valor a una variable que es de solo lectura
    return result;
}
