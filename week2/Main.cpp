#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

using namespace std;

void Swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

void SelectionSort(int *a, int size) {
  int smallest;
  for (int n = 0; n < size - 1; n++) {
    smallest = n;
    for (int i = n + 1; i < size - 1; i++) {
      if (a[i] < a[smallest]) {
        smallest = i;
      }
    }
    Swap(&a[n], &a[smallest]);
  }
}

void BubbleSort(int *a, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - 1; j++) {
      if (a[j] > a[j + 1]) {
        Swap(&a[j], &a[j + 1]);
      }
    }
  }
}

void ModifiedBubbleSort(int *a, int size) {
    bool flag = false;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - 1; j++) {
      if (a[j] > a[j + 1]) {
        Swap(&a[j], &a[j + 1]);
        flag = true;
      }
      if (flag==true) {
          break;
      }
    }
  }
}

int SequentialSearch(int *a, int size, int key) {
  for (int i = 0; i < size - 1; i++) {
    if (a[i] == key) {
      return 1;
    }
  }
}

void Print(int *a, int size) {
  for (int i = 0; i < size - 1; i++) {
    cout << a[i] << " ";
  }
}
int main() {
  cout << "Exercise 1 - Selection Sort" << endl;
  cout << "Before Sort" << endl;
  int data[] = {4, 5, 6, 1, 3, 9, 4, 8, 2, 7};
  Print(data, 10);
  cout << "After Sort" << endl;
  SelectionSort(data, 10);
  Print(data, 10);

  cout << "Exercise 2 - Selection Sort (more numbers)" << endl;
  int randSize = 1000;
  int randArray[randSize];
  for (int i = 0; i < randSize; i++) {
    randArray[i] = (rand() % 101);
  }
  SelectionSort(randArray, randSize);
  Print(randArray, randSize);

  cout << "Exercise 3 - Timing Sequential Sort" << endl;
  int bigRandSize = 1000 * 10 ^ 9;
  int bigRandArray[bigRandSize];
  for (int i = 0; i < bigRandSize; i++) {
    bigRandArray[i] = (rand() % 101);
  }

  using std::chrono::duration;
  using std::chrono::duration_cast;
  using std::chrono::high_resolution_clock;
  using std::chrono::milliseconds;
  auto t1 = high_resolution_clock::now();
  SelectionSort(bigRandArray, bigRandSize);
  auto t2 = high_resolution_clock::now();
  duration<double, std::milli> ms_double = t2 - t1;
  std::cout << "Sequential Sort Time: " << ms_double.count() << "ms";

  cout << "Exercise 4 - BubbleSort" << endl;
  cout << "Before Sort" << endl;
  int data2[] = {4, 5, 6, 1, 3, 9, 4, 8, 2, 7};
//   Print(data2, 10);
//   cout << "After Sort" << endl;
  auto t3 = high_resolution_clock::now();
  BubbleSort(bigRandArray, bigRandSize);
  auto t4 = high_resolution_clock::now();
  duration<double, std::milli> ms_double_bubble = t4 - t3;
  std::cout << "BubbleSort Time: " << ms_double_bubble.count() << "ms";
//   Print(data2, 10);

  cout << "Exercise 5" << endl;
  cout << "Modified Bubble Sort" << endl;
  auto t5 = high_resolution_clock::now();
  ModifiedBubbleSort(bigRandArray, bigRandSize);
  auto t6 = high_resolution_clock::now();
  duration<double, std::milli> ms_modified_double_bubble = t6 - t5;
  std::cout << "Modified BubbleSort Time: " << ms_modified_double_bubble.count() << "ms";


  cout << "Exercise 6" << endl;
  cout << "Sequential Search" << endl;
  int data3[] = {4, 5, 6, 1, 3, 9, 4, 8, 2, 7};
  Print(data3, 10);
  int found = SequentialSearch(data3, 10, 3);
  if (found != -1) {
    cout << "Key exists in the array " << endl;
  } else {
    cout << "Key does not exist in the array " << endl;
  }
}