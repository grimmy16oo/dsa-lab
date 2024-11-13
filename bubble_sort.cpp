#include<iostream>
using namespace std;
int main()
{
    int n = 8;
    int arr[n] = {32,51,27,85,66,23,13,57};

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"array after buble sort : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
