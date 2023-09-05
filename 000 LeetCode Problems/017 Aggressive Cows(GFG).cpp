class Solution {
public:

    bool isPossibleSol(vector<int>&stalls,int k, int mid){
        //can we place k cows, with at least mid dist bt cows.
        
        int c = 1;
        int pos = stalls[0];
        
        for(int i = 1; i<stalls.size();i++){
            if(stalls[i] - pos >= mid){
                c++;
                pos = stalls[i];//one more cow has placed
            }
            if(c == k) return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        sort(stalls.begin(),stalls.end());
        int start = 0;
        int end = stalls[stalls.size()-1]-stalls[0];
        int ans = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(isPossibleSol(stalls,k,mid)){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};