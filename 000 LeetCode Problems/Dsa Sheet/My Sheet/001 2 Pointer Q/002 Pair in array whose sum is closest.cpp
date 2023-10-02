class Solution{   
public:
     vector<int> sumClosest(vector<int>arr, int x)
    {
        int sum,di=INT_MAX;
        vector<int>ans(2);
        int i=0,j=arr.size()-1;
        while(i<j){
             sum=arr[i]+arr[j];
             if(abs(sum-x)<di){
                 di=abs(sum-x);
                 ans[0]=arr[i],ans[1]=arr[j];
             }
             if(sum>x){
                 j--;
             }else{
                 i++;
             }
        }
        return ans;
    }
};