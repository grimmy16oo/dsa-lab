#include <iostream>
using namespace std;

const int N = 100;

class Stack
{
    int stk[N];     // Array to store stack elements
    int t;          // Top index

public:
    Stack()
    {
        t = -1;
    }
    bool Full()
    {
        if(t == N-1)
            return true;
        else
            return false;
    }
    bool empty()
    {
        if(t == -1)
            return true;
        else
            return false;
    }
    void push(int x)
    {
        if (Full())
        {
            cout << "Cannot push: Stack overflow" << endl;
        }
        else
        {
            t++;
            stk[t] = x;
        }
    }
    void pop()
    {
        if (empty())
            cout << "Cannot pop: Stack underflow" << endl;
        else
            t--; 
    }
    int top()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
            return stk[t];
    }
};
int main()
{
    Stack s;
    int n = 5, x;
    
    cout << "Enter elements to push onto the stack: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.push(x);
    }

    cout << "Popping elements from the stack:" << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
