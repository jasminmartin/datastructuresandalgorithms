class Stack1 {
    private:
        int maxSize;
        int *stackData;
        int top;
    
    public:
        Stack1(int maxSize) {
            this->maxSize =maxSize;
            stackData = new int[maxSize];
            //indicate no values
            top = -1;
        }

        void Push(int value) {
            stackData[++top] = value; //increment top then assign value
        }

        int Pop() {
            return stackData[top--]; //return top then decrement
        }
        int Peek() {
            return stackData[top];
        }

        bool IsEmpty() {
            return (top == -1);
        }
        
        bool IsFull() {
            return (top == (maxSize)
            );
        }
};