using namespace std;
#include <iostream>

class Node {
public:
  Node *leftChild;
  Node *rightChild;
  int data;

Node(int data) {
  this->data = data;
  leftChild = 0;
  rightChild = 0;
}

void Display() { cout << this->data << endl; }
};