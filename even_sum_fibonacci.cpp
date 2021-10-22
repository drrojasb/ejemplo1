#include <iostream>

int main ()
{
  int i = 1;
  int j = 2;
  int ev_i = 0;
  int ev_j = 0;
  std::cout << "1 2" << " ";
  while (i + j <= 4000000) {
    i = i + j;
    j = i + j;
    std::cout << i << " " << j << " ";
    if (i % 2 == 0){
      ev_i = ev_i + i;
    }
    if (j % 2 == 0){
      ev_j = ev_j + j;
    }
  }
  std::cout << "\n" << ev_i + ev_j;
}
