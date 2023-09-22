#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={10,5,20,15};
    v.insert(v.begin(),100);       //100 10 5 20 15
    v.insert(v.begin()+2,100);     //100 10 100 5 20 15
    v.insert(v.end(),100);         //100 10 100 5 20 15 100
    v.insert(v.begin(), 3, 300);   //300 300 300 100 10 100 5 20 15 100 
    vector<int>v2;
    v2.insert(v2.begin(), v.begin(),v.begin()+9);//300 300 300 100 10 100 5 20 15
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:v2){
        cout<<i<<" ";
    }
}