class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int j = nums.size()-1;
        vector<int>ans;
        for(int i = 0;i<=j;i++){
            ans.push_back(abs(nums[i]*nums[i]));
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};