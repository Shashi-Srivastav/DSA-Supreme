class Solution {
public:
    int expandAroundIndex(string s ,int i, int j){
        int count =0;
         //jab tk match kre ga tb count ++ i piche j aage kr do
        while(i>= 0 && j<s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        int n= s.length();
        for(int center = 0;center<n;center++){
            //odd case
            int oddKaAns = expandAroundIndex(s,center,center);
            count = count+ oddKaAns;
            //even case
            int evenKaAns = expandAroundIndex(s,center,center+1);
            count = count + evenKaAns;
        }
        return count;
    }
};