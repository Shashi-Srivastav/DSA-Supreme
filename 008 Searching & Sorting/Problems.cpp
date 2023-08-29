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

    int n;
    cin>>n;
    int ans  = findSqrt(n);
    cout<<"Sqrt of "<<n<<" is "<<ans;
}