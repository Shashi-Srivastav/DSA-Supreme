#include<iostream>
using namespace std;

int mergeSort(int*arr, int s, int e){
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
    
}
int main(){
    int arr[] = {4,5,13,2,12};
    int n = 5;

    int s = 0;
    int e = n-1;
    mergeSort(arr,s,e);
    return 0;
}