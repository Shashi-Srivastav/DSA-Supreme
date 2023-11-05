class Solution {
public:
    void anss(vector<int>&v,int&n,int&ans,int currN){
        //base
        if(currN == n + 1){
            for(int i = 1;i<=n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            ++ans;
            return;
        }
        for(int i = 1;i<= n;i++){
            if(v[i] == 0 && (currN % i == 0 || i % currN == 0)){
                v[i] = currN;
                anss(v,n,ans,currN+1);
                v[i] = 0; // backt
            }
        }
    }
    int countArrangement(int n) {
        vector<int>v(n+1);
        int ans = 0;
        anss(v,n,ans,1);
        return ans;
    }
};