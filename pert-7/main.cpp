#include "class/Input.h"
#include "class/Output.h"
#include "class/Proses.h"
#include <iostream>
using namespace std;

int main() {
  Input input;
  Output output;
  Proses proses;

  string inputan;
  int inputanAngka;
  bool lanjut = true;
  while (lanjut) {
    cout << "\n1. tambah tugas\n2. kerjakan tugas\n3. keluar";
    cout << "\nmasukkan pilihan : ";
    getline(cin, inputan);
    inputanAngka = stoi(inputan);
    switch (inputanAngka) {
    case 1:
      input.inputTodoKaryawan();
      output.outputTodoKaryawan();
      break;
    case 2:
      proses.doTaskKaryawan();
      cout << "\ntugas yang telah selesai : \n";
      output.outputSelesaiTaskKaryawan();
      cout << "\ntugas yang harus dikerjakan : \n"; 
      output.outputTodoKaryawan();
      break;
    case 3:
      lanjut=false;
      break;
    default:
      cout << "\npilihan tidak ada\n";
    }
  }
}