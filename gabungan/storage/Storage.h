#pragma once
#include <string>
#include <vector>
using namespace std;
#define UKURAN 5
#define BARIS 2

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

string kumpul[UKURAN][BARIS], accepted[UKURAN][BARIS], rejected[UKURAN][BARIS];
int topK = 0, topA = 0, topR = 0;
string todo[UKURAN], selesai[100];
int lastTodo = -1, lastSelesai = -1;

class Karyawan
{
public:
  int uang;
  string nama;
  Karyawan *next;
  Karyawan *prev;

  Karyawan(string d, int p)
  {
    nama = d;
    uang = p;
    next = prev = NULL;
  }
};

Karyawan *daftar = NULL;

class StrukturOrganisasi
{
  string nama;
  int point;
  string id;
  StrukturOrganisasi *left;
  StrukturOrganisasi *right;

public:
  StrukturOrganisasi();
  StrukturOrganisasi(string nama, string id, int point);
  StrukturOrganisasi *insert(StrukturOrganisasi *, string nama, string id, int point);
  void inorder(StrukturOrganisasi *);
};
StrukturOrganisasi::StrukturOrganisasi() : nama(""), id(""), point(0), left(NULL), right(NULL) {}
StrukturOrganisasi::StrukturOrganisasi(string n, string i, int p)
{
  nama = n;
  id = i;
  point = p;
  left = right = NULL;
}
StrukturOrganisasi *StrukturOrganisasi::insert(StrukturOrganisasi *root, string n, string i, int p)
{
  if (!root)
  {
    return new StrukturOrganisasi(n, i, p);
  }
  if (p > root->point)
  {
    root->right = insert(root->right, n, i, p);
  }
  else if (p < root->point)
  {
    root->left = insert(root->left, n, i, p);
  }
  return root;
}
void StrukturOrganisasi::inorder(StrukturOrganisasi *root)
{
  if (!root)
  {
    return;
  }
  inorder(root->left);
  cout << "nama  : " << root->nama << endl;
  cout << "id    : " << root->id << endl;
  cout << "point : " << root->point << endl;
  inorder(root->right);
}

StrukturOrganisasi so, *root = NULL;

class GajiKaryawan
{
  string nama;
  int gaji, height;
  GajiKaryawan *right, *left;

public:
  int tinggi(GajiKaryawan *node) { return node ? node->height : 0; }
  int faktorSetimbang(GajiKaryawan *node)
  {
    return tinggi(node->right) - tinggi(node->left);
  }
  void aturTinggi(GajiKaryawan *node)
  {
    node->height = max(tinggi(node->left), tinggi(node->right)) + 1;
  }
  GajiKaryawan *putarKiri(GajiKaryawan *node)
  {
    GajiKaryawan *temp = node->right;
    node->right = temp->left;
    temp->left = node;
    aturTinggi(node);
    aturTinggi(temp);
    return temp;
  }
  GajiKaryawan *putarKanan(GajiKaryawan *node)
  {
    GajiKaryawan *temp = node->left;
    node->left = temp->right;
    temp->right = node;
    aturTinggi(node);
    aturTinggi(temp);
    return temp;
  }
  GajiKaryawan *setimbang(GajiKaryawan *node)
  {
    aturTinggi(node);
    if (faktorSetimbang(node) == 2)
    {
      if (faktorSetimbang(node->right) == 0)
      {
        node->right = putarKanan(node->right);
      }
      return putarKiri(node);
    }
    if (faktorSetimbang(node) == -2)
    {
      if (faktorSetimbang(node->left) > 0)
      {
        node->left = putarKiri(node->left);
      }
      return putarKanan(node);
    }
    return node;
  }
  GajiKaryawan *insert(GajiKaryawan *node, int g, string n)
  {
    if (!node)
    {
      node = new GajiKaryawan;
      node->gaji = g;
      node->nama = n;
      node->right = node->left = NULL;
      node->height = 1;
    }
    else if (g < node->gaji)
    {
      node->left = insert(node->left, g, n);
    }
    else
    {
      node->right = insert(node->right, g, n);
    }
    return setimbang(node);
  }
  void inOrder(GajiKaryawan *node)
  {
    if (node)
    {
      inOrder(node->left);
      cout << "nama : " << node->nama << endl;
      cout << "gaji : " << node->gaji << endl;
      inOrder(node->right);
    }
  }
};
GajiKaryawan gk, *rootGajiKaryawan = NULL;