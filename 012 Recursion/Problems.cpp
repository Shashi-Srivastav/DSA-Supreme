#include<iostream>
using namespace std;
void lastOccLeftToRight(string s, int x, int i, int&ans){
    //base case
    if(i>=s.size()){
        return;
    }

    //ek case sol
    if(s[i] == x){
        ans = i;
    }

    //rec sambhal lega
    lastOccLeftToRight(s,x,i+1,ans);
}
void lastOccRightToLeft(string s, int x, int i, int&ans){
    //base case
    if(i<0){
        return;
    }

    //ek case sol
    if(s[i] == x){
        ans = i;
        return;
    }

    //rec sambhal lega
    lastOccRightToLeft(s,x,i-1,ans);
}
void reverse(string& s,int i, int j){

    //base case
    if(i>=j) return;
    //ek case solve krna hai
    if(i<=s.size()){
        swap(s[i],s[j]);
    }
    //baki rec
    reverse(s,i+1,j-1);
}

int main(){
    // string s;
    // cin>>s;
    // char x;
    // cin>>x;
    // int ans = -1;
    // lastOccLeftToRight(s,x,0,ans);
    // lastOccRightToLeft(s,x,s.size()-1,ans);
    // cout<<ans<<endl;

    //prob 2 - reverse a string ----------------------
    string s;
    cin>>s;
    reverse(s, 0,s.size()-1);
    cout<<s;
} 