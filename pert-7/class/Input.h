#include "../storage/Storage.h"
#include <iostream>
using namespace std;

class Input {
public:
  void inputTodoKaryawan() {
    if (apakahPenuh()) {
      cout << "\ntugas sudah terlalu banyak\n";
      return;
    }
    cout << "masukkan nama tugas : ";
    getline(cin, todo[lastTodo + 1]);
    lastTodo += 1;
  }
  bool apakahPenuh() { return lastTodo == UKURAN - 1 ? true : false; }
};