#pragma once
#include <string>
#include <vector>
using namespace std;
#define UKURAN 5

class NamaManager {
public:
  string nama;
  NamaManager *next;
  NamaManager *prev;
};
class IdManager {
public:
  string id;
  IdManager *next;
  IdManager *prev;
};
class TahunManager {
public:
  int tahun;
  TahunManager *next;
  TahunManager *prev;
};

NamaManager *mulai4 = NULL;
IdManager *mulai5 = NULL;
TahunManager *mulai6 = NULL;