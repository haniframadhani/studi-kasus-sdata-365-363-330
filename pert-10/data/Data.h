#include <iostream>
#pragma once
#include <string>
#include <vector>
using namespace std;
class GajiKaryawan {
  string nama;
  int gaji, height;
  GajiKaryawan *right, *left;

public:
  int tinggi(GajiKaryawan *node) { return node ? node->height : 0; }
  int faktorSetimbang(GajiKaryawan *node) {
    return tinggi(node->right) - tinggi(node->left);
  }
  void aturTinggi(GajiKaryawan *node) {
    node->height = max(tinggi(node->left), tinggi(node->right)) + 1;
  }
  GajiKaryawan *putarKiri(GajiKaryawan *node) {
    GajiKaryawan *temp = node->right;
    node->right = temp->left;
    temp->left = node;
    aturTinggi(node);
    aturTinggi(temp);
    return temp;
  }
  GajiKaryawan *putarKanan(GajiKaryawan *node) {
    GajiKaryawan *temp = node->left;
    node->left = temp->right;
    temp->right = node;
    aturTinggi(node);
    aturTinggi(temp);
    return temp;
  }
  GajiKaryawan *setimbang(GajiKaryawan *node) {
    aturTinggi(node);
    if (faktorSetimbang(node) == 2) {
      if (faktorSetimbang(node->right) == 0) {
        node->right = putarKanan(node->right);
      }
      return putarKiri(node);
    }
    if (faktorSetimbang(node) == -2) {
      if (faktorSetimbang(node->left) > 0) {
        node->left = putarKiri(node->left);
      }
      return putarKanan(node);
    }
    return node;
  }
  GajiKaryawan *insert(GajiKaryawan *node, int g, string n) {
    if (!node) {
      node = new GajiKaryawan;
      node->gaji = g;
      node->nama = n;
      node->right = node->left = NULL;
      node->height = 1;
    } else if (g < node->gaji) {
      node->left = insert(node->left, g, n);
    } else {
      node->right = insert(node->right, g, n);
    }
    return setimbang(node);
  }
  void inOrder(GajiKaryawan *node) {
    if (node) {
      inOrder(node->left);
      cout << "nama : " << node->nama << endl;
      cout << "gaji : " << node->gaji << endl;
      inOrder(node->right);
    }
  }
};
GajiKaryawan gk,*root = NULL;