#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {1,2,23,44,54,21,2,567,6,-1};
    int n = 10;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
                maxi = arr[i];
        }
        
    }
    cout<<"Max no. is : "<<maxi<<endl;
}