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

    for(int i=0; i<n-1; i++)
    {
        int Min = arr[i],loc = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < Min)
            {
                Min = arr[j];
                loc = j;
            }
        }
        swap(arr[i],arr[loc]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

