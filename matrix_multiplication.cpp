#include <iostream>
using namespace std;

int main()
{
    const int N = 100; 
    int row1, col1, row2, col2;
    int matrix1[N][N], matrix2[N][N], result[N][N] = {0};

    cout << "Enter rows and columns for matrix 1: ";
    cin >> row1 >> col1;

    cout << "Enter rows and columns for matrix 2: ";
    cin >> row2 >> col2;

    if (col1 != row2)
    {
        cout << "Matrix multiplication is not possible!" << endl;
        return 0;
    }

    cout << "Enter elements for matrix 1: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for matrix 2: " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
   
    cout << "Resultant matrix after multiplication: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
