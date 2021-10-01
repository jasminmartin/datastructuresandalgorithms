#include <iostream>
#include "Tree.cpp"
#include "PlayerTree.cpp"

int main() {
    // Tree*  myTree = new Tree();
    // myTree->Insert(10);
    // myTree->Insert(11);
    // myTree->Insert(14);
    // myTree->Insert(13);
    // myTree->Insert(1);
    // myTree->Insert(330);
    // myTree->Insert(132);
    // myTree->DisplayInOrder(myTree->root);

    PlayerTree*  myTree = new PlayerTree();
    myTree->Insert(10,1);
    myTree->Insert(11,2);
    myTree->Insert(14,3);
    myTree->Insert(13,4);
    myTree->Insert(1,5);
    myTree->Insert(330,6);
    myTree->Insert(132,7);
    myTree->DisplayInOrder(myTree->root);
};