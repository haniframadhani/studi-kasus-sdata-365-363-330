#include "class/Input.h"
#include "class/Output.h"
#include "class/Proses.h"
#include <iostream>  // standard library c++
using namespace std; // menggunakan namespace std secara default

int main() {
  Input input;
  Proses proses;
  Output output;

  input.inputDataKaryawan();
      cout << "+++++++++++++++++++++" << endl;
      cout << "---------------------" << endl;
  output.outputDataKaryawan();

  return 0;
}