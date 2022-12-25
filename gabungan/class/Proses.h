#include "../storage/Storage.h"
#include <iostream>
using namespace std;

class Proses
{
public:
  void periksaLaporan()
  {
    cout << kumpul[topK - 1][0] << " ditulis oleh " << kumpul[topK - 1][1] << " apakah diterima? ";
    cout << "Y/N : ";
    cin >> input;
    if (input == 'Y' || input == 'y')
    {
      pindahAccepted();
    }
    else if (input == 'N' || input == 'n')
    {
      pindahRejected();
    }
    else
    {
      cout << "input salah" << endl;
      periksaLaporan();
    }
  }
  void pindahAccepted()
  {
    tempStack[0][0] = kumpul[topK - 1][0];
    tempStack[0][1] = kumpul[topK - 1][1];
    accepted[topA][0] = tempStack[0][0];
    accepted[topA][1] = tempStack[0][1];
    kumpul[topK - 1][0] = "-";
    kumpul[topK - 1][1] = "-";
    topA += 1;
    topK -= 1;
  }
  void pindahRejected()
  {
    tempStack[0][0] = kumpul[topK - 1][0];
    tempStack[0][1] = kumpul[topK - 1][1];
    rejected[topR][0] = tempStack[0][0];
    rejected[topR][1] = tempStack[0][1];
    kumpul[topK - 1][0] = "-";
    kumpul[topK - 1][1] = "-";
    topR += 1;
    topK -= 1;
  }
  void geser()
  {
    for (int i = 0; i <= lastTodo; i++)
    {
      if (i < lastTodo)
      {
        todo[i] = todo[i + 1];
      }
      else
      {
        todo[i] = "";
      }
    }
    lastTodo -= 1;
  }
  void doTaskKaryawan()
  {
    if (apakahKosong())
    {
      cout << "\ntidak ada tugas yang tersisa\n";
      return;
    }
    selesai[lastSelesai + 1] = todo[0];
    lastSelesai += 1;
    geser();
  }
  bool apakahKosong()
  {
    return lastTodo < 0 ? true : false;
  }
  void hitungTotal()
  {
    getUang(daftar);
    cout << "total pendapatan : " << totalUang << endl;
  }

private:
  string tempStack[1][2];
  bool status;
  char input;
  string temp;
  void getUang(Karyawan *head)
  {
    Karyawan *temp = head;
    while (temp != NULL)
    {
      totalUang += temp->uang;
      temp = temp->next;
    }
  }

  int totalUang = 0;
};