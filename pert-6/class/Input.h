#include "../storage/Storage.h"
#include <iostream>
using namespace std;

class Input {
public:
  void inputLaporanKaryawan(int n = 0) {
    if (n < UKURAN) {
      cout << "masukkan nama laporan    : ";
      getline(cin, kumpul[n][0]);
      cout << "masukkan nama penulis    : ";
      getline(cin, kumpul[n][1]);
      cout << "---------------------" << endl;
      topK += 1;
      return inputLaporanKaryawan(n + 1);
    } else {
      return;
    }
  }
};