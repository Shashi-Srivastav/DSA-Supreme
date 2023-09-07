class Solution {
public:

    bool isitpalindrome(string&s,int i, int j){
        while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<=j){
            if(s[i] != s[j]){
                return isitpalindrome(s,i+1,j) || isitpalindrome(s,i,j-1);
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};