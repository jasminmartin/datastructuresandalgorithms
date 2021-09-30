#include "../week4/LinkedList.cpp"

class LinkedStack {
private:
    LinkedList* stackData;
    int top;

public:
    LinkedStack() {
    stackData = new LinkedList();
    top = -1;
    }

    void Push(int value) {
        stackData->Insert(new Link(value));
    }

    Link * Pop() {
        top--;
        return stackData->DeleteFirst();
    }

    Link * Peek() {
        return stackData->first;
    }

    bool IsEmpty() {
        return stackData->IsEmpty();
    }

};