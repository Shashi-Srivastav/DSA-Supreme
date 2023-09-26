#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    // step1 : chose pivot ele
    int pivortIndex = s;
    int pivortElement = arr[s];

    // step 2 find right position of pivot ele and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivortElement)
        {
            count++;
        }
    }
    // jb main loop se bahar aaya tb pivort ki right index padi hui hai

    int rightIndex = s + count;
    swap(arr[pivortIndex], arr[rightIndex]);
    pivortIndex = rightIndex;

    // step 3 left me chote right me bde
    int i = s;
    int j = e;

    while (i < pivortIndex && j > pivortIndex)
    {
        while (arr[i] < pivortElement)
        {
            i++;
        }
        while (arr[j] > pivortElement)
        {
            j--;
        }
        // case 2
        // a - > you found the ele to swap (left me pivort se bda hai or right me pivort se chote hai)
        // b -> no need to swap
        if (i < pivortIndex && j > pivortIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivortIndex;
}
void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition logic, return pivort ele
    int p = partition(arr, s, e);

    // rec call
    // pivort ele -> left
    quickSort(arr, s, p - 1);
    // pivort ele -> right
    quickSort(arr, p + 1, e);
}
void printPermutation(string&str,int i){
    //base case
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    //swapping
    for(int j=i;j<str.length();j++){
        ///swap
        swap(str[i],str[j]);
        //rec call
        printPermutation(str,i+1);
        //backtracking - cause to recreate original str because its get swapped by upper code @pass by ref 
        swap(str[i],str[j]);
    }
}  
int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 30};
    int n = 7;

    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);
    for (auto i : arr)
    {
        cout << i << " ";
    }


    //BackTracking -----------------------------
     string str = "abc";
     int i = 0;
     printPermutation(str,i);
    return 0;
}