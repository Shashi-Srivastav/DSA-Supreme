// int = 4byte = 32bits
// class Solution {
// public:
//     int reverse(int x) {
//         int ans = 0, rem = 0;
//         bool isNeg = false;
//         if(x<0){
//             isNeg = true;
//             x = -x;
//         }
//         while (x>0)
//         {
//             int digit = x % 10;
//             ans = ans * 10 + digit;
//             x = x / 10;
//         }
//         return isNeg ? -ans : ans;
//     }
// };
// Till Now all three tast case pass but cant submit cause error------

// cout<<INT_MIN<<endl;//-2147483648
// cout<<INT_MAX<<wndl;// 2147483647

// -2pow31---------0----------2pow31-1;

// Modification according to Q ----------------------------------------------------------------------

// class Solution {
// public:
//     int reverse(int x) {
//         int ans = 0, rem = 0;
//         bool isNeg = false;
//         if(x <= INT_MIN){
//             return 0;
//         }
//         if(x<0){
//             isNeg = true;
//             x = -x;
//         }
//         while (x>0)
//         {
//             if(ans > INT_MAX / 10){
//                 return 0;
//             }
//             int digit = x % 10;
//             ans = ans * 10 + digit;
//             x = x / 10;
//         }
//         return isNeg ? -ans : ans;
//     }
// };
