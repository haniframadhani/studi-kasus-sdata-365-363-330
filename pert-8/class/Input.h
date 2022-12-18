#pragma once
#include "../storage/Storage.h"
#include "Output.h"
#include <iostream>
using namespace std;

class Input {
public:
  void inputDataPendaftar() {
    while (lanjut) {
      cout << "1. mendaftar\n2. wawancara\n3. selesai\nmasukkan pilihan : ";
      getline(cin, input);
      pilih = stoi(input);
      switch (pilih) {
      case 1:
        cout << "masukkan nama : ";
        getline(cin, input);
        cout << "masukkan uang : ";
        getline(cin, uangS);
        uang = stoi(uangS);
        push(daftar, input, uang);
        cout << "---------------------" << endl;
        output.tampilDataPendaftar();
        break;
      case 2:
        shift(daftar);
        cout << "\npendaftar masuk tahap interview\n";
        output.tampilDataPendaftar();
        break;
      case 3:
        lanjut = false;
        break;
      default:
        cout << "\npilihan tidak ada\n";
        break;
      }
    }
  }

private:
  string shift(Karyawan *&head) {
    if (head != NULL) {
      string curr = head->nama;
      head = head->next;
      if (head != NULL) {
        head->prev = NULL;
      }
      return curr;
    }
  }
  void push(Karyawan *&head, string data, int priority) {
    if (head == NULL) {
      Karyawan *newNode = new Karyawan(data, priority);
      head = newNode;
      return;
    }

    Karyawan *node = new Karyawan(data, priority);

    Karyawan *temp = head;
    Karyawan *parent = NULL;
    while (temp != NULL && temp->uang >= priority) {
      parent = temp;
      temp = temp->next;
    }

    if (parent == NULL) {
      node->next = head;
      head->prev = node;
      head = node;
    } else if (temp == NULL) {
      parent->next = node;
      node->prev = parent;
    } else {
      parent->next = node;
      node->prev = parent;
      node->next = temp;
      temp->prev = node;
    }
  }

  Output output;
  string input, uangS;
  int uang, pilih;
  bool lanjut = true;
};