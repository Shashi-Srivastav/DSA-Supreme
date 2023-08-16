#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,0,0,1,0,0,1,1,0,0,1,1,1,1,0,};
    int n = 15;
    int numzero = 0;
    int numone = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            numzero++;
        }
        else{
            numone++;
        }
    }
    cout<<"Number of zeros : "<<numzero<<endl;
    cout<<"Number of ones : "<<numone<<endl;
}