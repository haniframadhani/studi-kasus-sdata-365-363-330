#include <iostream>
#pragma once
#include <string>
#include <vector>
using namespace std;
class StrukturOrganisasi
{
  string nama;
  int point;
  string id;
  StrukturOrganisasi *left;
  StrukturOrganisasi *right;

public:
  StrukturOrganisasi();
  StrukturOrganisasi(string nama, string id, int point);
  StrukturOrganisasi *insert(StrukturOrganisasi *, string nama, string id, int point);
  void inorder(StrukturOrganisasi *);
};
StrukturOrganisasi::StrukturOrganisasi() : nama(""), id(""), point(0), left(NULL), right(NULL) {}
StrukturOrganisasi::StrukturOrganisasi(string n, string i, int p)
{
  nama = n;
  id = i;
  point = p;
  left = right = NULL;
}
StrukturOrganisasi *StrukturOrganisasi::insert(StrukturOrganisasi *root, string n, string i, int p)
{
  if (!root)
  {
    return new StrukturOrganisasi(n, i, p);
  }
  if (p > root->point)
  {
    root->right = insert(root->right, n, i, p);
  }
  else if (p < root->point)
  {
    root->left = insert(root->left, n, i, p);
  }
  return root;
}
void StrukturOrganisasi::inorder(StrukturOrganisasi *root)
{
  if (!root)
  {
    return;
  }
  inorder(root->left);
  cout << "nama  : " << root->nama << endl;
  cout << "id    : " << root->id << endl;
  cout << "point : " << root->point << endl;
  inorder(root->right);
}

StrukturOrganisasi so, *root = NULL;