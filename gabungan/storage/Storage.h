#pragma once
#include <string>
#include <vector>
using namespace std;
#define UKURAN 5

// static array
string nama[UKURAN], id[UKURAN], jabatan[UKURAN];
// dynamic array
string *namaInvestor = new string[UKURAN];
int *jumlahInvestasi = new int[UKURAN];

// single linked list
class NamaCeo
{
public:
  string nama;
  NamaCeo *next;
};
class IdCeo
{
public:
  string id;
  IdCeo *next;
};

NamaCeo *mulai1 = NULL;
IdCeo *mulai2 = NULL;

// doubly linked list
class NamaManager
{
public:
  string nama;
  NamaManager *next;
  NamaManager *prev;
};
class IdManager
{
public:
  string id;
  IdManager *next;
  IdManager *prev;
};
class TahunManager
{
public:
  int tahun;
  TahunManager *next;
  TahunManager *prev;
};

NamaManager *mulai4 = NULL;
IdManager *mulai5 = NULL;
TahunManager *mulai6 = NULL;