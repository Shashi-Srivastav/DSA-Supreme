class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>&ans,int start){
        //base
        if(start == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = start;i<nums.size();i++){
            swap(nums[i],nums[start]);
            helper(nums,ans,start+1);
            swap(nums[i],nums[start]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(nums,ans,0);
        //push ans into set
        set<vector<int>>st;
        for(auto e:ans){
            st.insert(e);
        }
        ans.clear();
        for(auto e:st){
            ans.push_back(e);
        }
        return ans;
    }
};