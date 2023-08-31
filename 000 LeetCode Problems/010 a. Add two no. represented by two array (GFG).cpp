class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int carry = 0;
    int i = n-1;
    int j = m-1;
    string ans;
    while(i>=0 && j>=0){
        int x = a[i] + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--;
        j--;
    }
    while(i>=0){
        int x = a[i] + 0 + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--;
    }
    while(j>=0){
        int x = 0 + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        j--;
    }
    if(carry){
        ans.push_back(carry + '0');
    }
    while(ans[ans.size()-1] == '0'){
        ans.pop_back();//carry is int to store int in str we use + '0'
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};