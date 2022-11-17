#include "class/Input.h"
#include "class/Output.h"
#include "data/Data.h"
#include <iostream>  // standard library c++
using namespace std; // menggunakan namespace std secara default

int main() {
  Input input;
  Output output;

  input.inputDataKaryawan();
  output.outputDataKaryawan();

  return 0;
}