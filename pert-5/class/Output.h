#include "../data/Data.h"
#include <iostream>

using namespace std;

class Output {
public:
  void outputDataKaryawan() {
    while (mulai4 != NULL) {
      cout << "NamaManager    : " << mulai4->nama;
      cout << "\n";
      cout << "IDManager      : " << mulai5->id;
      cout << "\n";
      cout << "Tahun Menjabat : " << mulai6->tahun;
      cout << "\n\n";
      mulai4 = mulai4->next;
      mulai5 = mulai5->next;
      mulai6 = mulai6->next;
      //dah
    }
  }
};