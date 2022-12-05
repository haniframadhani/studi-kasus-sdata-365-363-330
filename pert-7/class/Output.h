#include "../storage/Storage.h"
#include <iostream>
using namespace std;
class Output {
public:
  void outputTodoKaryawan(int n = lastTodo) {
    if (n >= 0) {
      cout << "nama tugas : " << todo[n] << endl;
      cout << "---------------------" << endl;
      return outputTodoKaryawan(n - 1);
    } else {
      return;
    }
  }
  void outputSelesaiTaskKaryawan(int n = lastSelesai) {
    if (n >= 0) {
      cout << "nama tugas : " << selesai[n] << endl;
      cout << "---------------------" << endl;
      return outputSelesaiTaskKaryawan(n - 1);
    } else {
      return;
    }
  }
};