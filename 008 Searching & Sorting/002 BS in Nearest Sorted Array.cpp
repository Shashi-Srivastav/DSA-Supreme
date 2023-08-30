#include<iostream>
using namespace std;
int BSNearStrArr(int arr[],int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid+1 <= e && arr[mid+1] == target)// mid is a pointer 
        {
            return mid +1;
        }
        else if (mid-1 >= s && arr[mid-1] == target)
        {
            return mid - 1;
        }

        if (target<arr[mid])
        {
            e = mid -2;
        }
        if (target > arr[mid])
        {
            s = mid +2;
        }
        mid = s+(e-s)/2;    
    }
    return -1;
    
}

int main(){
    int arr[] = {1,3,2,5,4,6,8,7,9};
    int n = 9;
    int target = 9;
    int ans = BSNearStrArr(arr,n,target);
    cout<<"Found "<<target<< " at "<<ans;
}