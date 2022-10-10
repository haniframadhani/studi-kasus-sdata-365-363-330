// Tema: Perkantoran
#include "class/Input.h"
#include "class/Output.h"
#include "class/Proses.h"
#include <iostream>
using namespace std;
int main() {
  Input input;
  Proses proses;
  Output output;

  input.inputDataKaryawan();
  output.outputDataKaryawan();

  return 0;
}