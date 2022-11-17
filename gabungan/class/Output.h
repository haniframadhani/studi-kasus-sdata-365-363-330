#include "../storage/Storage.h"
#include <iostream>
using namespace std;
class Output
{
public:
  void outputDataKaryawan(int n = 0)
  {
    if (n < UKURAN)
    {
      cout << "nama    :" << nama[n] << endl;
      cout << "id      :" << id[n] << endl;
      cout << "jabatan :" << jabatan[n] << endl;
      cout << "---------------------" << endl;
      return outputDataKaryawan(n + 1);
    }
    else
    {
      return;
    }
  }
  void outputDataInvestor(int n = 0)
  {
    if (n < UKURAN)
    {
      cout << "investor         :" << namaInvestor[n] << endl;
      cout << "jumlah investasi :" << jumlahInvestasi[n] << endl;
      cout << "---------------------" << endl;
      return outputDataInvestor(n + 1);
    }
    else
    {
      return;
    }
  }
  // ouput single linked list
  void outputDataCeo()
  {
    while (mulai1 != NULL)
    {
      cout << "Nama CEO : " << mulai1->nama;
      cout << "\n";
      cout << "ID CEO   : " << mulai2->id;
      cout << "\n";
      cout << "---------------------\n";
      mulai1 = mulai1->next;
      mulai2 = mulai2->next;
    }
  }
  // output doubly linked list
  void outputDataManager()
  {
    while (mulai4 != NULL)
    {
      cout << "NamaManager    : " << mulai4->nama;
      cout << "\n";
      cout << "IDManager      : " << mulai5->id;
      cout << "\n";
      cout << "Tahun Menjabat : " << mulai6->tahun;
      cout << "\n---------------------\n";
      mulai4 = mulai4->next;
      mulai5 = mulai5->next;
      mulai6 = mulai6->next;
    }
  }
};