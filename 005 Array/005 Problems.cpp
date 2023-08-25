#include<iostream>
using namespace std;

void findMissing(int *a, int n){
    //visited arr
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index - 1]>0)
        {
            a[index -1] *= -1;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}

int main(){
    int n;
    int a[]={1,3,5,3,4};
    n = sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}