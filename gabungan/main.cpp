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
  // input laporan karyawan
  input.inputLaporanKaryawan();
  cout << "\n";
  output.outputKumpulLaporan();
  cout << "\n";
  for (int i = 0; i < UKURAN; i++)
  {
    proses.periksaLaporan();
  }
  // todo list
  string inputan;
  int inputanAngka;
  bool lanjut = true;
  while (lanjut)
  {
    cout << "\n1. tambah tugas\n2. kerjakan tugas\n3. keluar";
    cout << "\nmasukkan pilihan : ";
    getline(cin, inputan);
    inputanAngka = stoi(inputan);
    switch (inputanAngka)
    {
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
      lanjut = false;
      break;
    default:
      cout << "\npilihan tidak ada\n";
    }
  }
  input.inputDataPendaftar();
  proses.hitungTotal();
  for (int i = 0; i < 5; i++)
  {
    input.inputDataStrukturOrganisasi(i);
  }
  int i = 0;
  bool lanjut = true;
  while (lanjut)
  {
    lanjut = input.isi(i);
    i++;
  }

  // output data karyawan
  output.outputDataKaryawan();
  // output data investor
  output.outputDataInvestor();
  // output data CEO
  output.outputDataCeo();
  // output data manager
  output.outputDataManager();
  // output laporan karyawan
  cout << "\n";
  output.outputKumpulLaporan();
  cout << "\nLaporan yang diterima\n";
  output.outputTerimaLaporan();
  cout << "\nLaporan yang ditolak\n";
  output.outputTolakLaporan();
  output.tampilDataPendaftar();
  output.displayStrukturOrganisasi();

  return 0;
}