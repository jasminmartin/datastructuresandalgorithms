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
  //{5,1,3,4,2}
  for (int n = 0; n < size - 1; n++) {
    // locate the smallest unprocessed element
    smallest = n;
    for (int i = n + 1; i < size - 1; i++) {
      if (a[i] < a[smallest]) {
        smallest = i;
      }
    }
    Swap(&a[n], &a[smallest]);
  }
}

// Compare pairs of adjacent elements of the sequence, if they are
// in the wrong order swap them and do this till there are no more
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
      if (flag == true) {
        break;
      }
    }
  }
}

// Each element is checked in sequence until a match is found
int SequentialSearch(int *a, int size, int key) {
  for (int i = 0; i < size - 1; i++) {
    if (a[i] == key) {
      return 1;
    }
  }
}

// Searches large sorted data. The key is compared to the middle value, if not
// matched and the key is less than the value the action is repeated on the left
// portion of the array otherwise the right.
int BinarySearch(int a[], int size, int key) {
  int middle = 0;
  int lower = 0;
  int upper = size - 1;
  for (int i = 0; i < size - 1; i++) {
    middle = (lower + upper) / 2;
    if (key < a[middle]) {
      upper = middle - 1;
    } else if (key > a[middle]) {
      lower = middle + 1;
    } else {
      return middle;
    }
    if (lower > upper) {
      return -1;
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
  std::cout << "Modified BubbleSort Time: " << ms_modified_double_bubble.count()
            << "ms";

  cout << "Exercise 6" << endl;
  cout << "Sequential Search" << endl;
  int data3[] = {4, 5, 6, 1, 3, 9, 4, 8, 2, 7};
  Print(data3, 10);
  auto t7 = high_resolution_clock::now();
  int found = SequentialSearch(data3, 10, 3);
  auto t8 = high_resolution_clock::now();
  duration<double, std::milli> ms_sequential_search = t8 - t7;
  std::cout << "Sequential Search Time: " << ms_sequential_search.count()
            << "ms";
  if (found != -1) {
    cout << "Key exists in the array " << endl;
  } else {
    cout << "Key does not exist in the array " << endl;
  }

  cout << "Exercise 7" << endl;
  cout << "Binary Search" << endl;
  int data4[] = {4, 5, 6, 1, 3, 9, 4, 8, 2, 7};
  auto t9 = high_resolution_clock::now();
  int foundBinary = BinarySearch(data4, 10, 3);
  auto t10 = high_resolution_clock::now();
  duration<double, std::milli> ms_binary_search = t10 - t9;
  std::cout << "Binary Search Time: " << ms_binary_search.count()
            << "ms" <<endl;
  if (foundBinary != -1) {
    cout << "Key exists in the array " << endl;
  } else {
    cout << "Key does not exist in the array " << endl;
  }
}