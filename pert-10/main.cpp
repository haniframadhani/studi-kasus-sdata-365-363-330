#include "class/Input.h"
#include <iostream>
using namespace std;
int main()
{
  Input input;
  int i = 0;
  bool lanjut = true;
  while (lanjut)
  {
    lanjut = input.isi(i);
    i++;
  }
}