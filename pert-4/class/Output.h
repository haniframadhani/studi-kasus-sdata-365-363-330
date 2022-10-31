#include "../data/Data.h"
#include <iostream>

using namespace std;

class Output {
public:
  void outputDataKaryawan() {
    while (mulai1 != NULL) {
      cout << "Nama    : " << mulai1->nama;
      cout << "\n";
      cout << "ID      : " << mulai2->id;
      cout << "\n";
      cout << "Jabatan : " << mulai3->jabatan;
      cout << "\n\n";
      mulai1 = mulai1->next;
      mulai2 = mulai2->next;
      mulai3 = mulai3->next;
    }
  }
};