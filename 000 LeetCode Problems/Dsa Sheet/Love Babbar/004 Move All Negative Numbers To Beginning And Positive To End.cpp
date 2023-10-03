#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int check = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]<0) swap(nums[check++],nums[i]);
    }   
    return nums; 
}