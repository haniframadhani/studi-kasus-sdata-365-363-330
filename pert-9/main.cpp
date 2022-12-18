#include "class/Input.h"
#include "class/Output.h"
#include <iostream>
using namespace std;

int main() {
  Input input;
  Output output;
  for (int i = 0; i < 5; i++) {
    input.inputData(i);
  }
  output.display();

  return 0;
}