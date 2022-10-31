#include "../data/Data.h"
#include <iostream>
using namespace std;

class Input {
public:
  void inputNama(struct Nama **mulai1, string data) {
    struct Nama *node_baru = new Nama;
    node_baru->nama = data;
    node_baru->next = (*mulai1);
    (*mulai1) = node_baru;
  }
  void inputId(struct Id **mulai2, string data) {
    struct Id *node_baru = new Id;
    node_baru->id = data;
    node_baru->next = (*mulai2);
    (*mulai2) = node_baru;
  }
  void inputJabatan(struct Jabatan **mulai3, string data) {
    struct Jabatan *node_baru = new Jabatan;
    node_baru->jabatan = data;
    node_baru->next = (*mulai3);
    (*mulai3) = node_baru;
  }
  void inputDataKaryawan() {

    string nama, id, jabatan;

    for (int i = 0; i < 5; i++) {
      cout << "Masukkan Nama    : ";
      cin >> nama;
      cout << "Masukkan Id      : ";
      cin >> id;
      cout << "Masukkan Jabatan : ";
      cin >> jabatan;
      inputNama(&mulai1, nama);
      inputId(&mulai2, id);
      inputJabatan(&mulai3, jabatan);
      cout << "\n";
    }
    while (mulai1 != NULL) {
      cout << "Nama \t: " << mulai1->nama;
      cout << "\n";
      cout << "ID \t: " << mulai2->id;
      cout << "\n";
      cout << "Jabatan  \t: " << mulai3->jabatan;
      cout << "\n\n";
      mulai1 = mulai1->next;
      mulai2 = mulai2->next;
      mulai3 = mulai3->next;
      }
  }
};