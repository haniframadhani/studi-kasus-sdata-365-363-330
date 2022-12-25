#pragma once
#include "Output.h"
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
  void inputLaporanKaryawan(int n = 0)
  {
    if (n < UKURAN)
    {
      cout << "masukkan nama laporan    : ";
      getline(cin, kumpul[n][0]);
      cout << "masukkan nama penulis    : ";
      getline(cin, kumpul[n][1]);
      cout << "---------------------" << endl;
      topK += 1;
      return inputLaporanKaryawan(n + 1);
    }
    else
    {
      return;
    }
  }
  void inputTodoKaryawan()
  {
    if (apakahPenuh())
    {
      cout << "\ntugas sudah terlalu banyak\n";
      return;
    }
    cout << "masukkan nama tugas : ";
    getline(cin, todo[lastTodo + 1]);
    lastTodo += 1;
  }
  bool apakahPenuh() { return lastTodo == UKURAN - 1 ? true : false; }
  void inputDataPendaftar()
  {
    while (lanjut)
    {
      cout << "1. mendaftar\n2. wawancara\n3. selesai\nmasukkan pilihan : ";
      getline(cin, input);
      pilih = stoi(input);
      switch (pilih)
      {
      case 1:
        cout << "masukkan nama : ";
        getline(cin, input);
        cout << "masukkan uang : ";
        getline(cin, uangS);
        uang = stoi(uangS);
        push(daftar, input, uang);
        cout << "---------------------" << endl;
        output.tampilDataPendaftar();
        break;
      case 2:
        shift(daftar);
        cout << "\npendaftar masuk tahap interview\n";
        output.tampilDataPendaftar();
        break;
      case 3:
        lanjut = false;
        break;
      default:
        cout << "\npilihan tidak ada\n";
        break;
      }
    }
  }
  void inputDataStrukturOrganisasi(int hitung)
  {
    cout << "masukkan nama : ";
    getline(cin, namaPekerja);
    cout << "masukkan id : ";
    getline(cin, idPekerja);
    cout << "masukkan point : ";
    getline(cin, p);
    point = stoi(p);
    if (hitung == 0)
    {
      root = so.insert(root, namaPekerja, idPekerja, point);
    }
    else
    {
      so.insert(root, namaPekerja, idPekerja, point);
    }
  }
  bool isi(int ke)
  {
    while (lanjutKaryawan)
    {
      cout << "1. input data\n2. tampil data\n3. keluar\nmasukkan pilihan : ";
      getline(cin, p);
      pilih = stoi(p);
      switch (pilih)
      {
      case 1:
        cout << "masukkan nama : ";
        getline(cin, namaKaryawan);
        cout << "masukkan gaji : ";
        getline(cin, g);
        gajiKaryawan = stoi(g);
        if (ke == 0)
        {
          rootGajiKaryawan = gk.insert(rootGajiKaryawan, gajiKaryawan, namaKaryawan);
        }
        else
        {
          gk.insert(rootGajiKaryawan, gajiKaryawan, namaKaryawan);
        }
        break;
      case 2:
        gk.inOrder(rootGajiKaryawan);
        break;
      case 3:
        lanjutKaryawan = false;
        break;
      default:
        cout << "pilihan tidak ada\n";
        break;
      }
    }
    return lanjutKaryawan;
  }

private:
  string bukanAngka;
  int angka;
  string namaCeo, idCeo;
  string namaManager, idManager;
  int tahun;
  string shift(Karyawan *&head)
  {
    if (head != NULL)
    {
      string curr = head->nama;
      head = head->next;
      if (head != NULL)
      {
        head->prev = NULL;
      }
      return curr;
    }
  }
  void push(Karyawan *&head, string data, int priority)
  {
    if (head == NULL)
    {
      Karyawan *newNode = new Karyawan(data, priority);
      head = newNode;
      return;
    }

    Karyawan *node = new Karyawan(data, priority);

    Karyawan *temp = head;
    Karyawan *parent = NULL;
    while (temp != NULL && temp->uang >= priority)
    {
      parent = temp;
      temp = temp->next;
    }

    if (parent == NULL)
    {
      node->next = head;
      head->prev = node;
      head = node;
    }
    else if (temp == NULL)
    {
      parent->next = node;
      node->prev = parent;
    }
    else
    {
      parent->next = node;
      node->prev = parent;
      node->next = temp;
      temp->prev = node;
    }
  }

  Output output;
  string input, uangS;
  int uang, pilih;
  bool lanjut = true;
  string namaPekerja, idPekerja, p;
  int point;
  int pilih, gajiKaryawan;
  string p, namaKaryawan, g;
  bool lanjutKaryawan = true;
};