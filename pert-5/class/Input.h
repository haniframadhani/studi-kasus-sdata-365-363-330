#include "../data/Data.h"
#include <iostream>
using namespace std;

class Input {
public:
  void inputNama(NamaManager **head_ref, string new_nama) {
    NamaManager *new_node = new NamaManager();
    new_node->nama = new_nama;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL) {
      (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
  }
  void inputId(IdManager **head_ref, string new_Id) {
    IdManager *new_node = new IdManager();
    new_node->id = new_Id;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL) {
      (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
  }
  void inputTahun(TahunManager **head_ref, int new_Tahun) {
    TahunManager *new_node = new TahunManager();
    new_node->tahun = new_Tahun;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL) {
      (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
  }
  void inputDataKaryawan() {

    string nama, id;
    int tahun;

    for (int i = 0; i < 5; i++) {
      cout << "Masukkan Nama Manager    : ";
      cin >> nama;
      cout << "Masukkan Id Manager      : ";
      cin >> id;
      cout << "Masukkan Tahun Menjabat  : ";
      cin >> tahun;
      inputNama(&mulai4, nama);
      inputId(&mulai5, id);
      inputTahun(&mulai6, tahun);
      cout << "\n";
    }
    while (mulai4 != NULL) {
      cout << "Nama Manager   : " << mulai4->nama;
      cout << "\n";
      cout << "Id Manager     : " << mulai5->id;
      cout << "\n";
      cout << "Tahun Menjabat : " << mulai6->tahun;
      cout << "\n\n";
      mulai4 = mulai4->next;
      mulai5 = mulai5->next;
      mulai6 = mulai6->next;
    }
  }
};