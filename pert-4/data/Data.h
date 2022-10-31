#pragma once
#include <string>
#include <vector>
using namespace std;
#define UKURAN 5

// string *nama = new string[UKURAN];
// string *id = new string[UKURAN];
// string *jabatan = new string[UKURAN];

class Nama {
public:
  string nama;
  Nama *next;
};
class Id {
public:
  string id;
  Id *next;
};
class Jabatan {
public:
  string jabatan;
  Jabatan *next;
};

Nama *mulai1 = NULL;
Id *mulai2 = NULL;
Jabatan *mulai3 = NULL;