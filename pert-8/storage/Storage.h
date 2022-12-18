#pragma once
#include <string>
#include <vector>
using namespace std;
#define UKURAN 5

class Karyawan {
public:
  int uang;
  string nama;
  Karyawan *next;
  Karyawan *prev;

  Karyawan(string d, int p) {
    nama = d;
    uang = p;
    next = prev = NULL;
  }
};

Karyawan *daftar = NULL;