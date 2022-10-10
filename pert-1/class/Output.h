#include "../storage/Storage.h"
#include <iostream>
using namespace std;
class Output {
public:
  void outputDataKaryawan(int n = 0) {
    if (n < 10) {
      cout << "nama : " << nama[n] << endl;
      cout << "id   : " << id[n] << endl;
      outputDataKaryawan(n + 1);
    } else {
      return;
    }
  }

private:
  int n = 0;
};