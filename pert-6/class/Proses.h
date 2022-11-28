#include "../storage/Storage.h"
#include <iostream>
using namespace std;

class Proses {
public:
  void periksaLaporan() {
    cout << kumpul[topK - 1][0] << " ditulis oleh " << kumpul[topK - 1][1]
         << " apakah diterima? ";
    cout << "Y/N : ";
    cin >> input;
    if (input == 'Y' || input == 'y') {
      pindahAccepted();
    } else if (input == 'N' || input == 'n') {
      pindahRejected();
    } else {
      cout << "input salah" << endl;
      periksaLaporan();
    }
  }
  void pindahAccepted() {
    tempStack[0][0] = kumpul[topK - 1][0];
    tempStack[0][1] = kumpul[topK - 1][1];
    accepted[topA][0] = tempStack[0][0];
    accepted[topA][1] = tempStack[0][1];
    kumpul[topK - 1][0] = "-";
    kumpul[topK - 1][1] = "-";
    topA += 1;
    topK -= 1;
  }
  void pindahRejected() {
    tempStack[0][0] = kumpul[topK - 1][0];
    tempStack[0][1] = kumpul[topK - 1][1];
    rejected[topR][0] = tempStack[0][0];
    rejected[topR][1] = tempStack[0][1];
    kumpul[topK - 1][0] = "-";
    kumpul[topK - 1][1] = "-";
    topR += 1;
    topK -= 1;
  }

private:
  string tempStack[1][2];
  bool status;
  char input;
};