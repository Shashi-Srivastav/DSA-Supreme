class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int currmax = arr[0];
        for(int i = 0;i<n;i++){
            if(arr[i]>currmax){
                currmax = arr[i];
            }
            if(currmax==i){
                ans++;
            }
        }
        return ans;
    }
};