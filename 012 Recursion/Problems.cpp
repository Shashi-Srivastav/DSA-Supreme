#include<iostream>
#include<vector>
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
bool isPlandrome(string& s, int i , int j){
    //base case
    if(i>=j) return true;
    //1solve 
    if(s[i]!=s[j]) return false;
    //rec
    return isPlandrome(s,i+1,j-1 );
}
void printSubarr_util(vector<int>&nums,int start,int end){
    //b.c
    if(end == nums.size()){
        return;
    }
    //1 case sol
    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    //re
    printSubarr_util(nums,start,end+1);
}
void printSubarr(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end = start;
        printSubarr_util(nums,start,end);
    }
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
    // string s;
    // cin>>s;
    // reverse(s, 0,s.size()-1);
    // cout<<s;

    //Plandrome check --------------------------------
    // string s;
    // cin>>s;
    // cout<<isPlandrome(s,0,s.size()-1)<<endl;

    //print all subarr using re ---------------------------
    vector<int>nums{1,2,3,4,5};
    printSubarr(nums);
    return 0;
    
} 