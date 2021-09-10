using namespace std;
#include <iostream>

#include "PriorityQueue.cpp"
#include "CircularQueue.cpp"

int main() {
  Queue *queue = new CircularQueue(10);
  cout << "Exercise 1" << endl;
  queue->Insert(1);
  queue->Insert(2);
  queue->Insert(3);
  queue->Insert(4);
  queue->Insert(5);
  queue->Insert(6);

  cout << "Exercise 2 and 3" << endl;
  while(!queue->IsEmpty()) {
      cout << queue->Remove() << endl;
}

PriorityQueue *pq = new PriorityQueue(10);
  cout << "Exercise 4 and 5" << endl;
  pq->Insert(2);
  pq->Insert(1);
  pq->Insert(3);
  pq->Insert(4);
  pq->Insert(5);
  pq->Insert(6);

  while(!pq->IsEmpty()) {
      cout << pq->Remove() << endl;
}

  cout << "Exercise 6" << endl;
  cout << "Tbc......" << endl;

}