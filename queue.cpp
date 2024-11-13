#include <iostream>
using namespace std;

const int n = 50;

class Queue
{
    int myqueue[n]; // Array for storing queue elements
    int Front, rear;

public:
    Queue()
    {
        Front = -1;
        rear = -1;
    }
    bool fill()
    {
        if (rear == n-1)
            return true;
        else
            return false;
    }
    void Insert(int x)
    {
        if (fill())
        {
            cout << "Cannot insert: Queue is full" << endl;
            return;
        }
        if (Front == -1)    // only once. for fist element
            Front++;
        
        rear++;
        myqueue[rear] = x;
    }

    bool empty()
    {
        if (Front == -1 || Front > rear)
            return true;
        else
            return false;
    }
    void Delete()
    {
        if (empty())
        {
            cout << "Cannot delete: Queue is empty" << endl;
            return;
        }

        Front++;
    }

    void display()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = Front; i <= rear; i++)
        {
            cout << myqueue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue m;

    int n,x;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>x;
        m.Insert(x);
    }

    m.display();
    m.Delete(); 
    m.display();

    return 0;
}
