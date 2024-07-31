class MyStack {
private:
    queue<int> q1; 
    queue<int> q2; 
public:
    MyStack() {}
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    int pop() {
        if (q1.empty()) {
            cout << "Stack underflow, unable to pop" << endl;
            return -1;
        }
        int topElement = q1.front();
        q1.pop();
        return topElement;
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty, nothing to pop" << endl;
            return -1; 
        }
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};