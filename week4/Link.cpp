#include <iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int data) {
        this->data = data;
    }

    void Display() {
        cout <<"Data: " << this->data << endl;
    }

    int getData() {
        return this->data;
    }
};