class Queue {
private:
  int count;
  int *data;
  int front;
  int rear;
  int size;

public:
  Queue(int size) {
    this->size = size;
    data = new int[size];
    front = 0;
    rear = -1;
    count = 0;
  }

int PeakDront() {
    return data[front];
}

bool IsEmpty() {
    if(count ==0) {
        return true;
    }
    else {
        return false;
    }
}

bool IsFull() {
    if(count == size) {
        return true;
    }
    else {
        return false;
    }
}

int Size() {
    return this->size;
}

void Insert(int item) {
    if(rear == size-1) {
        rear = -1;
    }
    rear++;
    data[rear] = item;
    count++;
}
};