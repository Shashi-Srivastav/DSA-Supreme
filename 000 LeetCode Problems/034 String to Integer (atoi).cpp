class Solution {
public:
    int myAtoi(string s) {
        int num = 0, i = 0, sign = 1;//+ve
        while(s[i] == ' '){//space hata diye hai
            i++;
        }
        if(i<s.size() && (s[i] == '-' || s[i] == '+')){//checking sign
            sign = s[i] == '+' ? 1 : -1;//if s[i] == +ve hai to 1 kr do -ve hai to -1 kr do
            ++i;
        }
        while(i<s.size() && isdigit(s[i])){//checking digits
            if(num>INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7')){//overflow sign int num - out of bound
                return sign == -1 ? INT_MIN : INT_MAX;
            }

            num = num*10 + (s[i] - '0');//converting char into int 
            ++i;
        }
        return num*sign;//if string does not contain any no.if -ve sign or +ve sign 
    }
};