#include <bits/stdc++.h>
using namespace std;

void merging(int arr[], int l, int mid, int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1], b[n2];

    // Copy data to temp arrays a[] and b[]
    for (int i=0; i<n1; i++)
    {
        a[i] = arr[l+i];      // (arr, l, mid)
    }
    for (int i=0; i<n2; i++)
    {
        b[i] = arr[mid+1+i];    //(arr, mid+1, r);
    }

    int i=0, j=0, k=l;

    // Merge the temp arrays back into arr[l..r]
    while (i<n1 && j<n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
        
    }

    // Copy the remaining elements of a[], if any
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    // Copy the remaining elements of b[], if any
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merging(arr, l, mid, r); // Merge the sorted halves
    }
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
