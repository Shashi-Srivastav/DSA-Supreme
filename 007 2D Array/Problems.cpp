#include <iostream>
#include <limits.h>
using namespace std;

void sumRowWise(int arr[][3], int row, int col)
{
    cout << "Printing Sum" << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

void sumColWise(int arr[][3], int row, int col)
{
    cout << "Printing Sum" << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}

bool searchKey(int arr[][6], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int findMinMax(int arr[][3], int row, int col)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Min : " << min << endl;
    
    cout << "Max : " << max << endl;
}

int main()
{

    //     int arr[3][3];
    //     int row = 3;
    //     int col = 3;

    // void sumRowWise(int arr[][3], int row, int col){
    //     cout<<"Printing Sum"<<endl;
    //     for (int i = 0; i < row; i++)
    //     {
    //         int sum = 0;
    //         for (int j = 0; j < col; j++)
    //         {
    //             sum = sum +arr[i][j];
    //         }
    //         cout<<sum<<endl;
    //     }
    //     }

    //     cout<<"Printing"<<endl;
    //     //printing row wise --------------
    //     for (int i = 0; i < row; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }

    //     //Sum row wise --------------------------------------------------------------------------

    //     sumRowWise(arr, row, col);

    //     //sum coloum wise ---------------------

    //     sumColWise(arr, row, col);

    // Searching in Vector ---------------------------------------------------------------------

    //     int arr[4][6] = {{1,2,3,4,5,6},{6,2,2,5,7,9},{2,3,4,1,0,5},{1,1,7,5,3,4}};
    //     int row = 4;
    //     int col = 6;

    //     int key = 8;
    //     if(searchKey(arr, row, col, key)){
    //         cout<<"True";
    //     }
    //     else{
    //         cout<<"False";
    //     }

    //     return 0;

    // Find Min & Max in 2D A rray --------------------------------------------------------------

    int arr[3][3] = {{128, 239, 209}, {865, 439, 218}, {348, 298, 676}};
    int row = 3;
    int col = 3;

    findMinMax(arr, row, col);
}