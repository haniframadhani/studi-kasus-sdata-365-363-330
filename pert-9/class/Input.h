#include "../data/Data.h"
#include <iostream>
using namespace std;

class Input {
public:
  void inputData(int hitung) {
    cout << "masukkan nama : ";
    getline(cin, nama);
    cout << "masukkan id : ";
    getline(cin, id);
    cout << "masukkan point : ";
    getline(cin, p);
    point = stoi(p);
    if (hitung == 0) {
      root = so.insert(root, nama, id, point);
    } else {
      so.insert(root, nama, id, point);
    }
  }

private:
  string nama, id, p;
  int point;
};