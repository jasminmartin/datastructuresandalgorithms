#include "LinkedList.cpp"
#include <iostream>
int main() {
  cout << "Exercise 1" << endl;

  // Pointers on the heap memory link the list
  LinkedList *ll = new LinkedList();
  ll->Insert(new Link(4));
  ll->Insert(new Link(2));
  ll->Insert(new Link(1));
  ll->Insert(new Link(22));
  ll->Insert(new Link(23));
  ll->Insert(new Link(124));

  ll->Display();

  Link *flink = ll->Find(23);
  if (flink != 0) {
    cout << "Found " << flink->data << endl;
  } else {
    cout << "Could not find link data" << endl;
  }

  Link *deletelink = ll -> Delete(23);
    if (deletelink != 0) {
    cout << "Deleted " << deletelink->data << endl;
    cout << "Here is the new list " << endl;
    ll->Display();

  } else {
    cout << "Could not find link data" << endl;
  }
  
  cout << "Deleting the first link" << endl;
  Link *deletefirstlink = ll -> DeleteFirst();
  ll->Display();

};