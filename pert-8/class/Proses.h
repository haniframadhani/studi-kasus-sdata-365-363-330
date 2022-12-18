#pragma once
#include "../storage/Storage.h"
#include <iostream>
using namespace std;
class Proses {
public:
  void hitungTotal() {
    getUang(daftar);
    cout << "total pendapatan : " << totalUang << endl;
  }

private:
  void getUang(Karyawan *head) {
    Karyawan *temp = head;
    while (temp != NULL) {
      totalUang += temp->uang;
      temp = temp->next;
    }
  }

  int totalUang = 0;
};