#include "Stack1.cpp"
#include "StackGeneric.cpp"
#include "LinkedStack.cpp"

#include <iostream>
using namespace std;


int main() {
//   cout << "Exercise 1" << endl;
//   //Removes last one first (4)
//   Stack1* stack1 = new Stack1(10);
//   stack1->Push(5);
//   stack1->Push(2);
//   stack1->Push(7);
//   stack1->Push(6);
//   stack1->Push(4);

//   while(!stack1->IsEmpty()) {
//     cout << stack1->Pop() << endl; 
//   }

//   cout << "Exercise 2" << endl;

//   StackGeneric<float>* stackGeneric = new StackGeneric<float>(10);
//   stackGeneric->Push(5.1);
//   stackGeneric->Push(2.2);
//   stackGeneric->Push(7.3);
//   stackGeneric->Push(6.4);
//   stackGeneric->Push(4.5);

//   while(!stackGeneric->IsEmpty()) {
//     cout << stackGeneric->Pop() << endl; 
//   }

  cout << "Exercise 3" << endl;

  LinkedStack* linkedStack = new LinkedStack();
  linkedStack->Push(5);
  linkedStack->Push(2);
  linkedStack->Push(7);
  linkedStack->Push(6);
  linkedStack->Push(4);

  while(!linkedStack->IsEmpty()) {
    cout << linkedStack->Pop()->getData() << endl; 
  }

};