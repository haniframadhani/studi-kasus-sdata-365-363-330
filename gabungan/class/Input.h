#include "../storage/Storage.h"
#include <iostream>
using namespace std;

class Input
{
public:
  void inputDataKaryawan(int n = 0)
  {
    if (n < UKURAN)
    {
      cout << "masukkan nama karyawan    : ";
      getline(cin, nama[n]);
      cout << "masukkan id karyawan      : ";
      getline(cin, id[n]);
      cout << "masukkan jabatan karyawan : ";
      getline(cin, jabatan[n]);
      cout << "---------------------" << endl;
      return inputDataKaryawan(n + 1);
    }
    else
    {
      return;
    }
  }
  void inputDataInvestor(int n = 0)
  {
    if (n < UKURAN)
    {
      cout << "masukkan nama investor    : ";
      getline(cin, namaInvestor[n]);
      cout << "masukkan jumlah investasi : ";
      getline(cin, bukanAngka);
      angka = stoi(bukanAngka);
      jumlahInvestasi[n] = angka;
      cout << "---------------------" << endl;
      return inputDataInvestor(n + 1);
    }
    else
    {
      return;
    }
  }
  // input single linked list
  void inputNamaCeo(struct NamaCeo **mulai1, string data)
  {
    struct NamaCeo *node_baru = new NamaCeo;
    node_baru->nama = data;
    node_baru->next = (*mulai1);
    (*mulai1) = node_baru;
  }
  void inputIdCeo(struct IdCeo **mulai2, string data)
  {
    struct IdCeo *node_baru = new IdCeo;
    node_baru->id = data;
    node_baru->next = (*mulai2);
    (*mulai2) = node_baru;
  }
  void inputDataCeo()
  {

    for (int i = 0; i < UKURAN; i++)
    {
      cout << "Masukkan Nama CEO : ";
      cin >> namaCeo;
      cout << "Masukkan Id CEO   : ";
      cin >> idCeo;
      inputNamaCeo(&mulai1, namaCeo);
      inputIdCeo(&mulai2, idCeo);
      cout << "---------------------\n";
    }
  }
  // input doubly linked list
  void inputNamaManager(NamaManager **head_ref, string new_nama)
  {
    NamaManager *new_node = new NamaManager();
    new_node->nama = new_nama;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
    {
      (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
  }
  void inputIdManager(IdManager **head_ref, string new_Id)
  {
    IdManager *new_node = new IdManager();
    new_node->id = new_Id;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
    {
      (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
  }
  void inputTahunMenjabat(TahunManager **head_ref, int new_Tahun)
  {
    TahunManager *new_node = new TahunManager();
    new_node->tahun = new_Tahun;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
    {
      (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
  }
  void inputDataManager()
  {

    for (int i = 0; i < 5; i++)
    {
      cout << "Masukkan Nama Manager    : ";
      cin >> namaManager;
      cout << "Masukkan Id Manager      : ";
      cin >> idManager;
      cout << "Masukkan Tahun Menjabat  : ";
      cin >> tahun;
      inputNamaManager(&mulai4, namaManager);
      inputIdManager(&mulai5, idManager);
      inputTahunMenjabat(&mulai6, tahun);
      cout << "---------------------\n";
    }
  }

private:
  string bukanAngka;
  int angka;
  string namaCeo, idCeo;
  string namaManager, idManager;
  int tahun;
};