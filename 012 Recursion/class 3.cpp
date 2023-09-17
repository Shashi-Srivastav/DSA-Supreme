#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(int arr[],int i,int size){
    // Base Case
    if(i == size-1)
        return true; // As we have traversed full array
    // Processing (Solving 1 case only)
    if(arr[i+1] < arr[i])
        return false;
    // Recusive Relation
    return checkSorted(arr,i+1,size); // Move to the next element
}
int searchElement(vector<int>&arr,int start,int end,int target){
    // Base Case
    if(start > end)
        return -1; // Element not found 
    // 1 case solve kro
    int mid = start + (end - start)/2; // Find mid
    if(arr[mid] == target){ // If element found at mid index, then return the index of array
        return mid;
    }
    // Recursive Relation
    else if(arr[mid] > target){
        // Search in left
        return searchElement(arr,start,mid-1,target);
    }
    else{   
        // Search in right
        return searchElement(arr,mid+1,end,target);
    }
}
void printSubSequence(string str,string output,int i){
    // Base Case
    if(i == str.length()){
        // print and then return
        cout<<output<<endl;
        return;
    }
    // Call for exclude (As it is)
    printSubSequence(str,output,i+1);
    // Call for include (Concatenate)
    output.push_back(str[i]);
    printSubSequence(str,output,i+1);
}
int main(){
    // int arr[] = {1,2,3,4,4,1};
    // int size = 6;
    // int i = 0;
    // if(checkSorted(arr,i,size)){
    //     cout<<"Sorted array"<<endl;
    // }
    // else{
    //     cout<<"Not sorted"<<endl;
    // }


    // vector<int>arr{1,2,3,4,5,6,7,8,9,10};
    // int n = arr.size();
    // int start = 0;
    // int end = n - 1;
    // int target = 11;
    // int ans = searchElement(arr,start,end,target);
    // if(ans == -1){
    //     cout<<"Not Found";
    // }
    // else{
    //     cout<<"Found";
    // }


    string str = "abc";
    string output = ""; // Initially empty
    int i = 0;
    printSubSequence(str,output,i);
    return 0;
}