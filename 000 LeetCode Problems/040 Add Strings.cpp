class Solution {
public:
    string addS(string num1, int p1, string num2, int p2,int carry){
        //base case
        if(p1<0&&p2<0){
            if(carry != 0){
                return string(1,carry + '0');
            }
            return "";
        }
        //1
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int sum = n1+n2+carry;
        int digit = sum%10;
        carry = sum/10;
        string ans = "";
        ans.push_back(digit + '0');
        //re
        ans += addS(num1,p1-1,num2,p2-1,carry);
        return ans;
    }
    string addStrings(string num1, string num2) {
        string ans = addS(num1,num1.size()-1,num2,num2.size()-1,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//Optimised one -----------------------------------


class Solution {
public:
    void addS(string& num1, int p1, string& num2, int p2,string& ans,int carry){
        //base case
        if(p1<0&&p2<0){
            if(carry != 0){
                ans.push_back(carry + '0');
            }
            return;
        }
        //1
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int sum = n1+n2+carry;
        int digit = sum%10;
        carry = sum/10;
        ans.push_back(digit + '0');
        //re
        addS(num1,p1-1,num2,p2-1,ans,carry);
       
    }
    string addStrings(string num1, string num2) {
        string ans = "";
        addS(num1,num1.size()-1,num2,num2.size()-1,ans,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};