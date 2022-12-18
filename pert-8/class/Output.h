#pragma once
#include "../storage/Storage.h"
#include <iostream>
using namespace std;
class Output {
public:
  void tampilDataPendaftar() { display(daftar); }

private:
  void display(Karyawan *head) {
    Karyawan *temp = head;
    while (temp != NULL) {
      cout << "nama        : " << temp->nama << endl;
      cout << "jumlah uang : " << temp->uang << endl;
      cout << "---------------------" << endl;
      temp = temp->next;
    }
  }
};