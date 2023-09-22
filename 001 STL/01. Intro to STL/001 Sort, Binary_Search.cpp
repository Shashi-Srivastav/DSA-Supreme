#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[4] = {10,15,8,20};
    //sort(arr,arr+4);//first_index , last_index+1;
    //or
    sort(begin(arr),end(arr));// will do everything auto
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(binary_search(arr,arr+4,8)){//first_index , last_index+1, key
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}