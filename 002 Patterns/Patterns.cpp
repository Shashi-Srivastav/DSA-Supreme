#include <iostream>
using namespace std;
int main()
{

    // Observ Row -
    // Observ Col -
    // Outer loop is for row, Inner loop is for col
    // Always start with 0;

    cout << "\nPattern 1 Rectangle ---------------------------------------\n\n";
    // 1.Rectangle

    // * * * * *
    // * * * * *
    // * * * * *

    for (int row = 0; row < 3; row = row + 1)
    {
        for (int col = 0; col < 5; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPattern 2 Square ---------------------------------------\n\n";

    // 2. Square
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    for (int row = 0; row < 4; row = row + 1)
    {
        for (int col = 0; col < 4; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\nPattern 3  ----------------------------------------------\n\n";
    // Pattern 3
    // * * * * *
    // *       * 
    // * * * * *
    for (int row = 0; row < 3; row = row + 1)
    {
        if (row == 0 || row == 2)
        {
            for (int col = 0; col < 5; col = col + 1)
            {
                cout << "* ";
            }
        }
        else
            {
                cout << "* ";
                for (int i = 0; i < 3; i++)
                {
                    cout <<"  ";
                }
                cout << "* ";
            }
        cout << endl;
    }
    cout << "\nPattern 4  -----------------------------------------------\n\n";
    // * * * * *
    // *       *
    // *       *
    // *       *
    // *       *
    // * * * * *
    for(int row = 0; row<6;row = row+1){
        if(row == 0 || row == 5){
            for(int col= 0;col<5;col = col+1){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i = 0;i<3;i++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    cout << "\nPattern 5 Half Pyramid-----------------------------------------------\n\n";
    //Pattern 5 Half Pyramid
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    for(int row = 0;row<5;row = row+1){
        for(int col = 0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout << "\nPattern 6 Inverted Half Pyramid-----------------------------------------------\n\n";
    //Pattern 6
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for(int row = 0;row<5;row++){
        for(int col = 0;col<5-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout << "\nPattern 7 Numeric Half Pyramid-----------------------------------------------\n\n";
    //Pattern 7
    // 1
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // 1 2 3 4 5
    for(int row = 0;row<5;row++){
        for(int col = 0;col<row+1;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
    cout << "\nPattern 8 Inverted Half Pyramid-----------------------------------------------\n\n";
    //Pattern 8 
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for(int row = 0;row<5;row++){
        for(int col = 0;col<5-row;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
    cout << "\nPattern 9 Holo Inverted Half Pyramid-----------------------------------------------\n\n";
    //Pattern 9
    // *****
    // *  * 
    // * *
    // **
    // *
    for(int row = 0;row<5;row++){
        for(int col = 0;col<5;col++ ){
            if(row == 0 || col == 0 || col == 5-row-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout << "\nPattern 10 Full Pyramid-----------------------------------------------\n\n";
    //Pattern 10
    for(int i = 0;i<6;i++){
        for(int j =0;j<11;j++){
            if()
        }
    }
    cout << "\nPattern 10 Full Pyramid-----------------------------------------------\n\n";
}