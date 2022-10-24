#include "../data/Data.h"
#include <iostream>
using namespace std;

class Input {
public:

  void inputDataKaryawan(int n = 0) {
    if (n < UKURAN) {
      cout << "masukkan nama      : ";
      getline(cin, nama[n]);
      cout << "masukkan id        : ";
      getline(cin, id[n]);
      cout << "masukkan jabatan   : ";
      getline(cin, jabatan[n]);
      cout << "---------------------" << endl;
      return inputDataKaryawan(n + 1);
    } else {
      return;
    }
  }
};