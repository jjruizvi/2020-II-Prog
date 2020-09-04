//Integrantes del grupo: Juan José Ruiz Villamil 

#include <iostream>

int main (void)
{
  int n = 1, a=1;//inicializo "n" en 1 (por defecto), adelante le sera asignado otro valor por el usuario, e inicializo a "a" en 1 para que el contador de las iteraciones arranque en 1 y asi me de la cantidad correcta de numeros de la secuencia incluyendo el valor inicial dado por el usuario.
  std::cout << "Por favor escriba un numero entero \n";
  std::cout << "Numero:"; std::cin >> n;
  
  while (n!=1)
    {
      a++;
      if (n%2 == 0) { //si es par
	n /= 2;
	std::cout << n << std::endl;
      }
      
      else {
	n = 3*n+1;
	std::cout << n << std::endl;
      }
    }
  std::cout << "cantidad de numeros de la secuencia es:"<< a <<"\n";
  return 0;
}
