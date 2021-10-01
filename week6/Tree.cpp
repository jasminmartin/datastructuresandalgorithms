#include "Node.cpp"

class Tree {
public:
  Node *root;

Tree() { root = 0; }
Node *Find(int key) {
  Node *current = root;
  while (current->data != key) {
    if (key < current->data)
      current = current->leftChild;
    else
      current = current->rightChild;
    if (current == 0)
      return 0;
  }
  return current;
}

void Insert(int data) {
    Node* newNode = new Node(data);
    if (root ==0) {
        root = newNode;
    }
    else {
        Node* current;
        current = root;
        Node* parent;
        while(true) {
            parent = current;
            if(data < current->data) {
                current = current->leftChild;
                if(current == 0) {
                    parent->leftChild=newNode;
                    return;
                }
            }
            else {
                current = current->rightChild;
                if (current==0) {
                    parent->rightChild=newNode;
                    return;
                }
            }
        }
    }
}

void  DisplayInOrder(Node *localRoot) {
  if (localRoot != 0) {
    DisplayInOrder(localRoot->leftChild);
    localRoot->Display();
    DisplayInOrder(localRoot->rightChild);
  }
}
};
