#include "Player.cpp"

class PlayerTree {
public:
  Player *root;

PlayerTree() { root = 0; }

void Insert(int level, int kills) {
    Player* newNode = new Player(level, kills);
    if (root ==0) {
        root = newNode;
    }
    else {
        Player* current;
        current = root;
        Player* parent;
        while(true) {
            parent = current;
            if(newNode->LessThan(newNode,current)) {
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

void  DisplayInOrder(Player *localRoot) {
  if (localRoot != 0) {
    DisplayInOrder(localRoot->leftChild);
    localRoot->Display();
    DisplayInOrder(localRoot->rightChild);
  }
}
};
