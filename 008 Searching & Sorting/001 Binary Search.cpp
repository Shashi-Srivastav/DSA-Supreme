#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    int midPointer = arr[mid];

    while (start<= end)
    {
        if(midPointer == key){
            return mid;
        }
        if(key<midPointer){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
    
}

int main(){
    //Binary Search Always work on sorted array
    int arr[] = {1,3,5,7,8,9,12,34,67,89};
    int size = 10;
    int key = 34;

    int index = binarySearch(arr,size,key);
    if(index == -1){
        cout<<"Target not found!";
    }
    else{
        cout<<"Index found at "<<index<<endl;
    }
    return 0;
}



// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == key) {
//             return mid;
//         }
//         if (key < arr[mid]) {
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {1, 3, 5, 7, 8, 9, 12, 34, 67, 89};
//     int size = 10;
//     int key = 34;

//     int index = binarySearch(arr, size, key);
//     if (index == -1) {
//         cout << "Target not found!";
//     } else {
//         cout << "Index found at " << index << endl;
//     }
//     return 0;
// }
