#include "../data/Data.h"
#include <iostream>
using namespace std;
class Input
{
public:
  bool isi(int ke)
  {
    while (lanjut)
    {
      cout << "1. input data\n2. tampil data\n3. keluar\nmasukkan pilihan : ";
      getline(cin, p);
      pilih = stoi(p);
      switch (pilih)
      {
      case 1:
        cout << "masukkan nama : ";
        getline(cin, nama);
        cout << "masukkan gaji : ";
        getline(cin, g);
        gaji = stoi(g);
        if (ke == 0)
        {
          root = gk.insert(root, gaji, nama);
        }
        else
        {
          gk.insert(root, gaji, nama);
        }
        break;
      case 2:
        gk.inOrder(root);
        break;
      case 3:
        lanjut = false;
        break;
      default:
        cout << "pilihan tidak ada\n";
        break;
      }
    }
    return lanjut;
  }

private:
  int pilih, gaji;
  string p, nama, g;
  bool lanjut = true;
};