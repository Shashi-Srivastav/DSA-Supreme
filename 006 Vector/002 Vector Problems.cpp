#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    // Find Unique -------------------------------------------------
    //  int z;
    //  cout<<"Enter size of vector"<<endl;
    //  cin>>z;
    //  vector<int> arr(z);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin>>arr[i];
    // }

    // int ans = findUnique(arr);
    // cout<<"Unique Element is : "<<ans<<endl;

    // Union of two array -----------------------------------------
    //     int arr[] = {1, 3, 5, 7, 9};
    //     int n = 5;
    //     int arr2[] = {2, 4, 6, 8};
    //     int m = 4;

    //     vector<int> arr3;

    //     for (int i = 0; i < n; i++)
    //     {
    //         arr3.push_back(arr[i]);
    //     }

    //     for (int i = 0; i < m; i++)
    //     {
    //         arr3.push_back(arr2[i]);
    //     }

    //     // printing

    //     for (int i = 0; i < arr3.size(); i++)
    //     {
    //         cout << arr3[i] << " ";
    //     }

    // Intersction Problem ---------------------------------------

    // vector<int> arr{1,2,3,4,5,6};
    // vector<int>brr{1,4,6};
    // vector<int>ans;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int element = arr[i];
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         if (element == brr[j]){
    //             ans.push_back(element);
    //         }
    //     }
    // }
    // //printing
    // for(auto value: ans){
    //     cout<<value<<" ";
    // }

    // Pair Sum ---------------------------------------------------

    // vector<int>arr{1,2,3,1,3,4,5,6,7};
    // int target = 8;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i+1; j <arr.size(); j++)
    //     {
    //         if (arr[i]+arr[j] == target)
    //         {
    //             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    //         }

    //     }

    // }

    // Triplete Pair-----------------------------------------------------

    // vector<int> arr{10, 20, 30, 10, 40, 60, 45, 55, 60};
    // int sum = 100;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //         for (int k = 0; k < arr.size(); k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == sum)
    //             {
    //                 cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
    //             }
    //         }
    //     }
    // }


    //Sort 0 & 1 / Dutch National Flag Problem ----------------------------------

    vector<int> arr{1,0,0,1,0,1,0,1,1,0,1,0,1,0,1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i != end)
    {
        if(arr[i] == 0){
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
    else{
        swap(arr[i],arr[end]);
        end--;
    }
        
    }
    
    for(auto value : arr){
        cout<<value<<" ";
    }

}