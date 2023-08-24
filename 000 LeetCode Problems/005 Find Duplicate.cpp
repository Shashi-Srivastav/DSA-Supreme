//Attempt one 
//You must solve the problem without modifying the array nums and uses only constant extra space.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Try 1 -------------------------------
        // sort(nums.begin(),nums.end());//TC - O(logn)
        // for(int i = 0; i<nums.size()- 1; i++){
        //     if(nums[i]==nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;

        //Above working but TC!
        //Try 2 -------------------------------------------------------
        // int ans = -1;
        // for(int i = 0;i<nums.size();i++){
        //     int index = abs(nums[i]);
        //check already visited
        //     if(nums[index]<0){
        //         ans = index;
        //         break;
        //     }
        //marking visited
        //     nums[index] *= -1;
        // }
        // return ans;
        //TC - O(n)
        //but we did modify arr - x

        //Try 3 ---------------------------------------------------------
        while(nums[0] != nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
        //Worked but still modifying ---we can use binry search mthd
    }
};