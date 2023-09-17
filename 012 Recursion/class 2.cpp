#include<iostream>
using namespace std;
int climbStairs(int n){
    //base case to stop condition
    if(n == 0 || n == 1) return 1;

    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}
void printArrayElements(int arr[],int i,int size){
    // Base Case
    if(i == size)
        return;
    // Processing
    cout<<arr[i]<<" ";
    // Recursive Relation
    printArrayElements(arr,i+1,size);
}
void findMaximum(int arr[],int i,int size,int& maxi){//maxi is pass by ref 
    // Base Case
    if(i == size)
        return; 
    // Processing
    if(maxi<arr[i]) // Maximum element condition
        maxi = arr[i];
    // Recursive Relation
    findMaximum(arr,i+1,size,maxi);
}
void findMin(int arr[],int i,int size,int& mini){
    // Base Case
    if(i == size)
        return; 
    // Processing
    if(mini>arr[i]) // Finding the minimum element 
        mini = arr[i];
    // Recursive Relation
    findMin(arr,i+1,size,mini);
}
int checkKey(string& str,int i,int n,int key){
    // Base case -> Traverse whole string
    if(i == n)
        return -1;
    // Solve 1 case rest recursion will see
    if(str[i] == key)
        return i;
    // move ahead in the traversal
    return checkKey(str,i+1,n,key);
}
int main(){
    // int n;
    // cout<<"Enter the value of n "<<endl;
    // cin>>n;
    // int ans = climbStairs(n);
    // cout<<"Answer is : "<<ans<<endl;

    // int arr[] = {1,2,3,4,5};
    // int size = 5;
    // int i = 0;
    // printArrayElements(arr,i,size);

    // int arr[] = {10,20,30,40,50,40,30,20,10,0};
    // int size = 10;
    // int i = 0;
    // int maxi = INT_MIN;
    // findMaximum(arr,i,size,maxi);
    // cout<<maxi;

    // int arr[] = {1,2,3,4,5};
    // int size = 5;
    // int i = 0;
    // int mini = INT_MAX;
    // findMin(arr,i,size,mini);
    // cout<<mini;

    string str = "lovebabbar";
    int n = str.length();
    char key = 'r';
    int i = 0;
    int ans = checkKey(str,i,n,key);
    cout<<ans<<endl;

    return 0;
}
