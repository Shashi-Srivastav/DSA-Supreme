class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CurrMax = INT_MIN;
        int NewSum = 0;
        for(int i = 0;i<nums.size();i++){
            if(NewSum<0) NewSum = 0;//reset
            NewSum = NewSum+nums[i];
            CurrMax = max(NewSum,CurrMax);
        }
        return CurrMax;
    }
};