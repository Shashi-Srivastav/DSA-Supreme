#include<iostream>
using namespace std;
int main(){
    pair<int,int>p1(10,20); // or p1 = (10,20);
    pair<int,string>p2(10,"shashi");
    cout<<p1.first<<" "<<p1.second<<endl;//10 20
    cout<<p2.first<<" "<<p2.second<<endl;//10 shashi

    //comparision -------------------------
    pair<int,int>p11(10,20),p22(10,30);
    cout<<(p11 == p22)<<endl;
    cout<<(p11 != p22)<<endl;
    cout<<(p11 > p22)<<endl;
    cout<<(p11 < p22)<<endl;
}