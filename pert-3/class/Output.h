#include "../data/Data.h"
#include <iostream>

using namespace std;

class Output {
public:
  void outputDataKaryawan(int n = 0) {
    if (n < UKURAN) {
      cout << "nama      :" << nama[n] << endl;
      cout << "id        :" << id[n] << endl;
      cout << "jabatan   :" << jabatan[n] << endl;
      cout << "---------------------" << endl;
      return outputDataKaryawan(n + 1);
    } else {
      return;
    }
  }
};