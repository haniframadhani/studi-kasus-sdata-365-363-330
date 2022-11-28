#include "../storage/Storage.h"
#include <iostream>
using namespace std;
class Output {
public:
  void outputKumpulLaporan(int n = UKURAN - 1) {
    if (n >= 0) {
      cout << "nama laporan    :" << kumpul[n][0] << endl;
      cout << "penulis laporan :" << kumpul[n][1] << endl;
      cout << "---------------------" << endl;
      return outputKumpulLaporan(n - 1);
    } else {
      return;
    }
  }
  ////////////////////////////////////////////////////
  void outputTerimaLaporan(int n = UKURAN - 1) {
    if (n >= 0) {
      cout << "nama laporan    :" << accepted[n][0] << endl;
      cout << "penulis laporan :" << accepted[n][1] << endl;
      cout << "---------------------" << endl;
      return outputTerimaLaporan(n - 1);
    } else {
      return;
    }
  }
  ////////////////////////////////////////////////////
  void outputTolakLaporan(int n = UKURAN - 1) {
    if (n >= 0) {
      cout << "nama laporan    :" << rejected[n][0] << endl;
      cout << "penulis laporan :" << rejected[n][1] << endl;
      cout << "---------------------" << endl;
      return outputTolakLaporan(n - 1);
    } else {
      return;
    }
  }
};