#include<iostream>
using namespace std;
int slowExpo(int a, int b){
    int ans = 1;
    for(int i = 0;i<b;i++){
        ans*=a;
    }
    return ans;
}
int fastExpo(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            //odd
            ans = ans*a;
        }
        a = a*a;
        b>>=1;//right shift //b=b/2;
    }
    return ans;
}
int main(){
//Count prime --------------------------------------------
// class Solution
// {
// public:
    // bool isPrime(int n){
    //     if(n <= 1) return false;
    //     for(int i = 2;i<n;i++){
    //         if(n%i == 0){
    //             return false;
    //         }
    //     }
    //     return true;
    // };
    // tle -----------
    
    // bool isPrime(int n){
    //     if(n <= 1) return false;
    //int sqrtN = sqrt(n);
    //     for(int i = 2;i<sqrtN;i++){
    //         if(n%i == 0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }; 
    //tle ----------------------
    
    

//     int countPrimes(int n)
    //Sieve of Eratosthenes
//      int countPrimes(int n) {
//         if (n == 0) return 0;
//         vector<bool>prime(n,true);
//         prime[0] = prime[1] = false;
//         int ans = 0;
//         for(int i = 2;i<n;i++){
//             if(prime[i]){
//                 ans++;
//                 int j = 2*i;
//                 while(j<n){
//                     prime[j] = false;
//                     j+=i;
//                 }
//             }
//         }
//         return ans;
//     }
// };

//GCD OF TWO NO -----------------------------------------------------------
// class Solution
// {
// 	public:
//     int gcd(int A, int B) 
// 	{ 
//         if(A == B) return B;
//         if(B == 0) return A;
//         while(A>0 && B>0){
//             if(A>B){
//                 A = A-B;
//             }
//             else{
//                 B = B - A;
//             }
//         }   
//         return A == 0 ? B : A;
// 	} 

//Fast Exopnenetial ---------------------------------------------------------

    //cout<<slowExpo(5,4)<<endl;//625 T.C - O(b);
   
    cout<<fastExpo(5,4)<<endl;//625  T.C - O(logB);

return 0;
}