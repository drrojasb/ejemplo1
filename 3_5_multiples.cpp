//Suma de todos los múltiplos de 3 o 5 menores de 1000

#include <iostream>

int main ()
{
  int multip_3 = 0;
  int multip_5 = 0;
  for (int i = 0; i < 1000; i++){
    if (i % 3 == 0){
      multip_3 = multip_3 + i;
    }
    else if (i % 5 == 0){
      multip_5 = multip_5 + i;
    }
  }
  std::cout << multip_3 + multip_5;
}
