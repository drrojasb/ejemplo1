// Calcular los numeros pares entre 1 y 100

// Incluir las librerías
#include <iostream>

void print_even (int nmin, int nmax); //Declaración de la función
void print_multip_3 (int nmin, int nmax); //Función que imprime múltiplos de 3

//main function
int main (void)
{
  const int m = 1;
  const int n = 50;
  
  std::cout << "m:" << m << "\n";
  std::cout << "n:" << n << "\n";

  print_even (m, n);
  print_multip_3 (m, n);
  
  return 0;
}

void print_even (int nmin, int nmax) // Implementación de la función
{
  for (int ii = nmin; ii <= nmax; ii = ii+1){
    //si el número es par, entonces imprimir
    if (ii%2 == 0){
      std::cout << ii << " ";
    }
  }
  std::cout << "\n";
}

void print_multip_3 (int nmin, int nmax) 
{
  for (int ii = nmin; ii <= nmax; ii = ii+1){
    //si el número es múltiplo de 3 , entonces imprimir
    if (ii%3 == 0){
      std::cout << ii << " ";
    }
  }
  std::cout << "\n";
}

