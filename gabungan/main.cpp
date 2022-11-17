// Tema: Perkantoran
#include "class/Input.h"
#include "class/Output.h"
#include "class/Proses.h"
#include <iostream>
using namespace std;
int main()
{
  Input input;
  Proses proses;
  Output output;

  // input data karyawan
  input.inputDataKaryawan();
  // input data investor
  input.inputDataInvestor();
  // input data CEO
  input.inputDataCeo();
  // input data manager
  input.inputDataManager();

  // output data karyawan
  output.outputDataKaryawan();
  // output data investor
  output.outputDataInvestor();
  // output data CEO
  output.outputDataCeo();
  // output data manager
  output.outputDataManager();

  return 0;
}