#include "Link.cpp"

class LinkedList {
public:
  Link *first;

  LinkedList() { first = 0; }
  bool IsEmpty() { return (first == 0); }

  // Items are added to the start of the list
  void Insert(Link *newLink) {
    newLink->next = first;
    first = newLink;
  }

  Link *DeleteFirst() {
    Link *temp = first;
    first = first->next;
    return temp;
  }

  Link *Delete(int key) {
    Link *current = first;
    Link *previous = first;

    while (current->data != key) {
      if (current->next == 0) {
        return 0;
      } else {
        previous = current;
        current = current->next;
      }
    }
    if (current == first) {
      first = first->next;
    } else {
      previous->next = current->next;
    }
    return current;
  }

  Link *Find(int key) {
    Link *current = first;
    while (current->data != key) {
      if (current->next == 0) {
        return 0;
      } else {
        current = current->next;
      }
    }
    return current;
  }

  void Display() {
    Link *current = first;
    while (current != 0) {
      current->Display();
      current = current->next;
    }
  }
};