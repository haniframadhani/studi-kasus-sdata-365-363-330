#include "../data/Data.h"
#include <iostream>
using namespace std;

class Output {
public:
  void display() {
    so.inorder(root);
  }
};