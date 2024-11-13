#include <iostream>
using namespace std;

const int n = 5; // Queue size

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

    bool Isfll()
    {
        if (rear == n-1)
            return true;
        else
            return false;
    }

    bool Isempty()
    {
        if (Front == -1 || Front > rear)
            return true;
        else
            return false;
    }

    void Insert(int x)
    {
        if (Isfll())
        {
            cout << "Cannot insert: Queue is full" << endl;
            return;
        }
        if (Front == -1)    // If queue is empty, initialize Front to 0
            Front = 0;
        
        rear++;
        myqueue[rear] = x;
    }

    void Delete()
    {
        if (Isempty())
        {
            cout << "Cannot delete: Queue is empty" << endl;
            return;
        }

        int item = myqueue[Front];
        cout << "Deleted item: " << item << endl;

        Front++;
        if (Front > rear)   // Reset the queue when all elements are deleted
        { 
            Front = -1;
            rear = -1;
        }
    }

    void display()
    {
        if (Isempty())
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
    int n = 5,x;
    cout<<"enter elements: ";
    while(n--)
    {
        cin>>x;
        m.Insert(x);
    }
    m.display();
    m.Delete();
    m.Delete();
    m.display();
    

    return 0;
}
