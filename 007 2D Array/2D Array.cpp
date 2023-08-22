#include<iostream>
using namespace std;
int main(){
    // int arr[3][3];

    // int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // // printing row wise

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
// cout<<endl;
    // //printing coloum wise
    //     for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //Taking Input ---------------------------------------------------------------------

    int arr[4][3];
    int row = 4;
    int col = 3;

//Takig input row wise ---------------
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    //printing row wise --------------
        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}