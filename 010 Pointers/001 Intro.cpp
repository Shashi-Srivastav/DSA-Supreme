#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 5;
    cout<<a<<endl;
    //to find address we use address operator
    cout<<&a<<endl;//0x62febc - hexa dec output
    cout<<&b<<endl;//a, b address are diff
     
}