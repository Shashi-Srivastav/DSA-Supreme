#include<iostream>
#include<vector>
using namespace std;
void printSol(vector<vector<char>>&board, int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<board[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
bool isSafe(int row,int col,vector<vector<char>>&board,int n){
    //check karna chate h, k kya hum yha pr
    //current cell [row,col] pr queen rakh k
    //sakte hu ya nhi
    int i = row;
    int j = col;
    //check row
    while(j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    //check upper left diagnol
    i = row;
    j = col;
    while(i>=0 && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }
    //check bottom  left diag
    i = row;
    j = col;
    while(i<n && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }    
    //khi pr queen nhi mili 
    //iska matlab yeh pos sahi hai - return true
    
}
void solve(vector<vector<char>>&board,int col,int n){
    //bc
    if(col>=n){
        printSol(board,n);
        return;
    }
    //1case solve 
    for(int row = 0;row<n;row++){
        if(isSafe(row,col,board,n)){
            //rakh do
            board[row][col] = 'Q';
            //rec layga
            solve(board,col+1,n);
            //backtracking 
            board[row][col] = '-';
        }
    }
}
int main(){
    int n = 4;
    vector<vector<char>>board(n,vector<char>(n,'-'));//all init with 0
    int col = 0;
    solve(board,col,n);
}