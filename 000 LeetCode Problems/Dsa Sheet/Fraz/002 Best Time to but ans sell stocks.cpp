//my
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int mini = INT_MAX;
//         int max = INT_MIN;
//         int ans = 0;
//         for(int i = 1;i<prices.size();i++){
//             if(prices[i]<mini){
//                 mini = prices[i];
//             }
//             if(prices[i]>max){
//                 max = prices[i];
//             }
            //if() return 0;
//         }
//         for(int i=1;i<prices.size();i++){
//             if((max-mini) > ans){
//                 ans = max-mini;
//             }
//         }
//         return ans;
//     }
// };


//wrong


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_el=INT_MAX;
        int max_el=0;
        int profit=max_el-min_el;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_el)
            {
                min_el=prices[i];
                max_el=-1;
            }
            else{
                max_el=max(max_el,prices[i]);
            }
            profit=max(profit,max_el-min_el);
        }
        if(profit<0)
        return 0;
        return profit;
    }
};