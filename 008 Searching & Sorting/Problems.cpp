#include <iostream>
#include <vector>
using namespace std;
int findFirstOcc(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    // using binary
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            // storing ans nd going left
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(vector<int>arr,int key){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid+1;
        }
        else if (key<arr[mid])
        {
            e = mid-1;
        }
        else if (key>arr[mid])
        {
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
    
}

int findSqrt(int n){
    int s = 0;
    int e = n;//not an array
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (mid*mid == n)
        {
            ans = mid;
            return ans;
        }
        else if(mid*mid > n){
            //left search
            e = mid -1;
        }
        else{
            //storing ans that is nearest to result
            ans = mid;
            //right search
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

bool binarySearchin2DArr(int arr[][5], int row, int col, int target){
    int s = 0;
    int e = row*col-1;
    int mid = s + (e - s)/2;

    while (s<=e){
    int rowIndex = mid/col;
    int colIndex = mid/col;

    if (arr[rowIndex][colIndex] == target)
    {
        return true;
    }
    if (arr[rowIndex][colIndex] < target)
    {
        s = mid+1;
    }
    else{
        e = mid -1;
    }
    mid = s + (e-s)/2;
    }
    return false;
}

int findPivortElement(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if(s == e ){
            return s;
        }
        if (mid <= e && arr[mid] > arr[mid + 1])
            return mid;
        if(mid - 1 >= s && arr[mid - 1] > arr[mid])
            return mid - 1;
        if(arr[s]>arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
        
    }
    return -1;

}

int main()
{

    // Prob Find First Occurance of Repated Element --------------------------------------------------------------------

    // vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7, 8, 9};
    // int key = 4;
    // // int firstOcc = findFirstOcc(arr,key);
    // // cout << "First occ at " << firstOcc << endl;

    // int lastOc = lastOcc(arr,key);
    // cout<<"Last Occ : "<<lastOc<<endl;

    //Prob  Find Sqrt of no. ---------------------------------------------------------------------------------------------

//     int n;
//     cin>>n;
//     int ans  = findSqrt(n);
//     cout<<"Sqrt of "<<n<<" is "<<ans;

//    Find element index of 2d arr using binary search -------------------------------------------------------------------
    // int arr[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    // int row = 4;
    // int col = 5;
    // int target = 19;
    // bool ans = binarySearchin2DArr(arr,row,col,target);

    // if (ans)
    // {
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not Found";
    // }
        
    //Find Pivot Element in Roated Sorted Array with no. Duplicate Element---------------------------------------------------

    //Pivot = Max element in ann Array
    vector<int>arr{2,3,4,5,6,7,8,9,10,1};
    int ans = findPivortElement(arr);
    cout<<"Pivot element foind ar index "<<ans;


}