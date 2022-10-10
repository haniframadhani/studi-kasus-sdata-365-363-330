#include "../storage/Storage.h"
#include <iostream>
using namespace std;

class Input {
public:
  void inputDataKaryawan(int n = 0) {
    if (n < 10) {
      cout << "masukkan nama : ";
      getline(cin, nama[n]);
      cout << "masukkan id   : ";
      getline(cin, id[n]);
      return inputDataKaryawan(n + 1);
    } else {
      return;
    }
  }

private:
  int n = 0;
};