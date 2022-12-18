#include "class/Input.h"
#include "class/Output.h"
#include "class/Proses.h"
#include <iostream>
using namespace std;

int main() {
  Input input;
  Output output;
  Proses proses;

  input.inputDataPendaftar();
  cout << "---------------------" << endl;
  output.tampilDataPendaftar();
  proses.hitungTotal();

  return 0;
}