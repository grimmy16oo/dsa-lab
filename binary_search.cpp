#include <iostream>
using namespace std;

int main()
{
    int n = 13, item = 40, loc = -1;
    int arr[n] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};

    int beg = 0, End = n - 1;

    while (beg <= End)
    {
        int mid = (beg + End) / 2;

        if (arr[mid] == item)
        {
            loc = mid;
            break;
        }
        else if (arr[mid] < item)
        {
            beg = mid + 1;
        }
        else
        {
            End = mid - 1;
        }
    }

    if (loc != -1)
        cout << "Item found at index: " << loc << endl;
    else
        cout << "Item not found" << endl;

    return 0;
}

