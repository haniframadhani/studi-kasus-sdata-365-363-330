#include "class/Input.h"
#include "class/Output.h"
#include "class/Proses.h"
#include <iostream>
using namespace std;

int main() {
  Input input;
  Output output;
  Proses proses;
  input.inputLaporanKaryawan();
  cout << "\n";
  output.outputKumpulLaporan();
  cout << "\n";
  for (int i = 0; i < UKURAN; i++) {
    proses.periksaLaporan();
  }
  cout << "\n";
  output.outputKumpulLaporan();
  cout << "\nLaporan yang diterima\n";
  output.outputTerimaLaporan();
  cout << "\nLaporan yang ditolak\n";
  output.outputTolakLaporan();
}