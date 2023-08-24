#include <iostream>
#include <vector>
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

    void waveVector(vector<vector<int> >arr){
        int m = arr.size();
        int n = arr[0].size();
        for (int i = 0; i < n; i++)
        {
            //even no of col - top to bottom
            if(( i & 1)==0){
                for (int j = 0; j < m; j++)
                {
                    cout<<arr[j][i]<<" ";
                }
            }
            else{
                // odd no of co. - bottom to top 
                for (int k = m-1;k>=0; k--)
                {
                    cout<<arr[k][i]<<" ";
                }
                
            }
        }
        
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

//     int arr[3][3] = {{128, 239, 209}, {865, 439, 218}, {348, 298, 676}};
//     int row = 3;
//     int col = 3;

//     findMinMax(arr, row, col);

    //Transpose a matrix -------------------------------------------------------------------------

    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int row = 3;
    // int col = 3;

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
    
    // cout<<"Transpose : "<<endl;
    // int transposeArr[3][3];

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         transposeArr[j][i] = arr[i][j];
    //     }
        
    // }
    // cout<<"Printing Result "<<endl;
    //         for (int i = 0; i < row; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             cout<<transposeArr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }


    //2D Vector ----------------------------------------------------------------------------------------------------

    // vector<vector<int> >arr;
    // vector<int> a ={1,2,3};
    // vector<int> b ={4,5,6,5,4,3};
    // vector<int> c ={7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // //Printing arr-----------

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<" "<<endl;
        
    // }
    
    //HW 2D Array ---------------------------------------------

    // vector<vector<int> > arr(5, vector<int>(5, -8));
    //cin>>[4][3];
    //cout<<[3][3];

    //Wave Print a Matrix-----------------------------------------------------------------------------------------

    vector<vector<int> >arr{
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    waveVector(arr);
    
    

}