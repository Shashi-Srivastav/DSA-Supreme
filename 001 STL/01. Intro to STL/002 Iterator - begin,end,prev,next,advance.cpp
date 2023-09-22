#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50};
    //begin ,end fx ---------------------------------------------
    // vector<int>::iterator i = v.begin();
    //or
    // auto i = v.begin();
    // cout<<*i<<endl;//10
    // i++;
    // cout<<*i<<endl;//20
    // i= v.end();//updated
    // cout<<*i<<endl;// i = beyond end ele of vect/arr/--any @garbage value
    // i--;
    // cout<<*i<<endl;//50

    //next,prev fx -------------------------------------------
    // auto i = v.begin();

    // i = next(i);//gives val at i+1;
    // cout<<*i<<endl;//10
    // i = next(i,2);//gives val at i+2;
    // cout<<*i<<endl;//40
    // i = prev(i);//gives val at i-1;
    // cout<<*i<<endl;//30

    //advance ------------------------------------------------
    auto i = v.begin();
    advance(i,3);//i+3;
    cout<<*i<<endl;//40
}