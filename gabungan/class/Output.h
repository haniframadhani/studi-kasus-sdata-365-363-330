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
  void outputKumpulLaporan(int n = UKURAN - 1)
  {
    if (n >= 0)
    {
      cout << "nama laporan    :" << kumpul[n][0] << endl;
      cout << "penulis laporan :" << kumpul[n][1] << endl;
      cout << "---------------------" << endl;
      return outputKumpulLaporan(n - 1);
    }
    else
    {
      return;
    }
  }
  void outputTerimaLaporan(int n = UKURAN - 1)
  {
    if (n >= 0)
    {
      cout << "nama laporan    :" << accepted[n][0] << endl;
      cout << "penulis laporan :" << accepted[n][1] << endl;
      cout << "---------------------" << endl;
      return outputTerimaLaporan(n - 1);
    }
    else
    {
      return;
    }
  }
  void outputTolakLaporan(int n = UKURAN - 1)
  {
    if (n >= 0)
    {
      cout << "nama laporan    :" << rejected[n][0] << endl;
      cout << "penulis laporan :" << rejected[n][1] << endl;
      cout << "---------------------" << endl;
      return outputTolakLaporan(n - 1);
    }
    else
    {
      return;
    }
  }
  void outputTodoKaryawan(int n = lastTodo)
  {
    if (n >= 0)
    {
      cout << "nama tugas : " << todo[n] << endl;
      cout << "---------------------" << endl;
      return outputTodoKaryawan(n - 1);
    }
    else
    {
      return;
    }
  }
  void outputSelesaiTaskKaryawan(int n = lastSelesai)
  {
    if (n >= 0)
    {
      cout << "nama tugas : " << selesai[n] << endl;
      cout << "---------------------" << endl;
      return outputSelesaiTaskKaryawan(n - 1);
    }
    else
    {
      return;
    }
  }
  void tampilDataPendaftar() { displayDaftarKaryawan(daftar); }
  void displayStrukturOrganisasi()
  {
    so.inorder(root);
  }

private:
  void displayDaftarKaryawan(Karyawan *head)
  {
    Karyawan *temp = head;
    while (temp != NULL)
    {
      cout << "nama        : " << temp->nama << endl;
      cout << "jumlah uang : " << temp->uang << endl;
      cout << "---------------------" << endl;
      temp = temp->next;
    }
  }
};