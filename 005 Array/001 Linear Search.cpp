#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int key = 5;

    bool flag = 0;
    //0 = notfound
    //1 = found
    
    //linear search
    for(int i = 0;i<n;i++){
        if(arr[i]== key){
            flag = 1;
        }
    }

    if(flag){
        cout<<"item found";
    }
    else{
        cout<<"not found";
    }
}