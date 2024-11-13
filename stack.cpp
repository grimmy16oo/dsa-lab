#include <iostream>
using namespace std;

const int N = 100;

class Stack
{
    int arr[N]; 
    int top;    

public:
    Stack()
    {
        top = -1;
    }
    bool Full()
    {
        if (top == N - 1)
            return true;
        else
            return false;
    }
    void push(int x)
    {
        if (Full())
        {
            cout << "Cannot push: Stack overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }
    bool empty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    void pop()
    {
        if (empty())
        {
            cout << "Cannot pop: Stack underflow" << endl;
            return;
        }

        top--;
    }
    int TOP()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
            return arr[top];
    }
};
int main()
{
    Stack s;
    int n, x;
    cout << "enter size: ";
    cin >> n;

    cout << "Enter elements to push onto the stack: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.push(x);
    }

    cout << "Popping elements from the stack:" << endl;
    while (!s.empty())
    {
        cout << s.TOP() << " ";
        s.pop();
    }

    return 0;
}
