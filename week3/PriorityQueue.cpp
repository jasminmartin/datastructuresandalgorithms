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

  bool IsEmpty() {
    if (count == 0) {
      return true;
    } else {
      return false;
    }
  }

  bool IsFull() {
    if (count == size) {
      return true;
    } else {
      return false;
    }
  }

  int Size() { return this->size; }

  void Remove(int item) {
    data[count];
    count--;
  }

  void Insert(int item) {
    if (IsEmpty() == true) {
      data[0];
      count++;
    } else {
      int j;
      for (int j = (count - 1); j >= 0; j--) {
        if (item > data[j]) {
          data[j + 1] = data[j];
        } else {
          break;
        }
        data[j + 1] = item;
        count++;
      }
    }
  }
};