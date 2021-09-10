using namespace std;
#include <iostream>

class PriorityQueue {
private:
  int count;
  int *data;
  int size;

public:
  PriorityQueue(int size) {
    this->size = size;
    data = new int[size];
    count = 0;
  }

  int PeakMin() { return data[count - 1]; }

  bool IsEmpty() { return (count == 0); }

  bool IsFull() {
    if (count == size) {
      return true;
    } else {
      return false;
    }
  }

  int Size() { return this->size; }

  int Remove() { return data[--count]; }

  void Insert(int item) {
    if (count == 0) {
      data[0] = item;
    } else {
      for (int j = count; j >= 0; j--) {
        if (item > data[j]) {
          data[j + 1] = data[j];
        } else {
          break;
        }
        data[j] = item;
      }
    }
    count++;
  }
};