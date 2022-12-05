#include "../storage/Storage.h"
#include <iostream>
using namespace std;

class Proses {
public:
  void geser() {
    for (int i = 0; i <= lastTodo; i++) {
      if (i < lastTodo) {
        todo[i] = todo[i + 1];
      } else {
        todo[i] = "";
      }
    }
    lastTodo -= 1;
  }
  void doTaskKaryawan() {
    if(apakahKosong()){
      cout << "\ntidak ada tugas yang tersisa\n";
      return;
    }
    selesai[lastSelesai + 1] = todo[0];
    lastSelesai += 1;
    geser();
  }
  bool apakahKosong(){
    return lastTodo < 0 ? true : false;
  }

private:
  string temp;
};