#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int item,loc=-1;
    cout<<"Enter item you wanna search: ";
    cin>>item;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == item)
        {
            loc = i;
            break;
        }
    }
    if(loc == -1)
        cout<<"item not found"<<endl;
    else
        cout<<"item is at index : "<<loc+1<<endl;

    return 0;
}
