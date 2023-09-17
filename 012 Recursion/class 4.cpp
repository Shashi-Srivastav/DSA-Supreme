#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&arr,int target){
    // Base Case
    if(target == 0)
        return 0; // 0 is achieved by 0 value only
    if(target < 0)
        return INT_MAX; // So that value of mini is not updated as this is invalid case
    // Solve 1 case
    int mini = INT_MAX;
    for(int i = 0;i<arr.size();i++){
        int ans = solve(arr,target - arr[i]);
        if(ans != INT_MAX) // As ans + 1 will be out of range 
            mini = min(mini,ans + 1);
    }
    return mini;
}

int solve(int n,int x,int y,int z){
    // Base Case
    if(n == 0) // Cant cut any segment
        return 0;
    if(n < 0)
        return INT_MIN;
    // 1 case solve
    int a = solve(n - x,x,y,z) + 1;// + 1 has Same logic as done in minimum coin change
    int b = solve(n - y,x,y,z) + 1;// + 1 has Same logic as done in minimum coin change
    int c = solve(n - z,x,y,z) + 1;// + 1 has Same logic as done in minimum coin change
    int ans = max(a,max(b,c));
    return ans;
}
void solve(vector<int>&arr,int sum,int& maxi,int i){
    // Base Case
    if(i>=arr.size()){
        maxi = max(sum,maxi);
        return;
    }
    // include
    solve(arr,sum+arr[i],maxi,i+2);
    // exclude
    solve(arr,sum,maxi,i+1);
}
using namespace std;
int main(){
    // vector<int>arr{1,2};
    // int target = 5;
    // int ans = solve(arr,target);
    // cout<<"Answer is "<<ans<<endl;

    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    // Solve function -> Return maximum number of segments
    int ans = solve(n,x,y,z);
    if(ans < 0) // Invalid answer
        ans = 0;
    cout<<"Answer is "<<ans;


    vector<int>arr{2,1,4,9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr,sum,maxi,i);
    cout<<maxi;

    return 0;
}