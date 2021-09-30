template<class T>

class StackGeneric {
    private:
        int maxSize;
        T *stackData;
        int top;
    
    public:
        StackGeneric(int maxSize) {
            this->maxSize =maxSize;
            stackData = new T[maxSize];
            //indicate no values
            top = -1;
        }

        void Push(T value) {
            stackData[++top] = value; //increment top then assign value
        }

        T Pop() {
            return stackData[top--]; //return top then decrement
        }
        T Peek() {
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