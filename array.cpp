#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter array size: ";
    cin >> n;

    int arr[n];
    cout << "enter array element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // INSERTING IN ARRAY
    int x, loc;
    cout << "\nEnter the item to insert and the location: ";
    cin >> x >> loc;
    loc--;

    for (int i = n - 1; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = x;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // DELETING FROM ARRAY
    int loc1;
    cout << "\nEnter the location to delete: ";
    cin >> loc1;
    loc1--;

    int item = arr[loc1];

    for (int i = loc1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}