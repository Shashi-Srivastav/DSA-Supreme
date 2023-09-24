#include<iostream>
using namespace std;


//do inplace merge sort------do inversion count 
void merge(int*arr,int s,int e){
    int mid = (s+e)/2;
    int len1 = mid - s+1;
    int len2 = e - mid;

    //assume to create arr for len1 , len2
    int* left = new int[len1];
    int* right = new int[len2];

    //copy values
    int k = s;
    for(int i = 0;i<len1;i++){
        left[i] = arr[k];
        k++;
    }
    k = mid+1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k];
        k++;
    }

    //merge logic 
    int leftIndex = 0;
    int rightIndex = 0; 
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }

        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    // copy logic for left arr
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    //copy of logic of right arr
    while (rightIndex<len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    
    
}
void mergeSort(int*arr, int s, int e){
    //base case
    //s == e -> single ele
    //s > e -> invalid arr
    if(s >= e) return;

    int mid = (s+e)/2;
    //left part sort krdo rec ji
    mergeSort(arr,s,mid);

    //right part sort kr do rec ji
    mergeSort(arr,mid+1,e);

    //now merge 2 sorted arr
    merge(arr,s,e);
}
int main(){
    int arr[] = {4,5,13,2,12};
    int n = 5;

    int s = 0;
    int e = n-1;
    mergeSort(arr,s,e);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}