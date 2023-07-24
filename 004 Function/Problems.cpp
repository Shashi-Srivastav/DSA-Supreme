#include <iostream>
using namespace std;
// Problem 1 Add 2 Numbers-------------------------------------------------------------------------
int addtono(int a, int b)
{
    return a + b;
}

// Problem 2 Find Max of 3 Numbers-------------------------------------------------------------------
int maxofthree(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
// Problem 3 Count From 1 to N ---------------------------------------------------------------------
int countoneton(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int ans = 0;
        ans = ans + i;
        cout<<i<<" ";
    }
}
// Problem sum of even number up to N ---------------------------------------------------------------------
int sumofnoupton (int n){
    int sum = 0;
    for(int i = 2;i<=n+1;i = i+2){
        sum = sum+i;
    }
    return sum;
}
// Problem frind area of circle -----------------------------------------------------------------------------
int areaofcircle(int r){
    int pi = 3.14;
    int res = pi*r*r;
    return res;
}
// Problem find number is even or odd -------------------------------------------------------------------------
int findevenodd (int n){
    if(n % 2== 0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}
// Problem find factorial of the number -------------------------------------------------------------------------
int findfactorial(int n){
    int numinator = n;
    
}
int main()
{
    // cout << addtono(2, 3);
    // cout << maxofthree(2, 3, 4);
    // countoneton(19);
    // cout<<sumofnoupton(10);
    // cout<<areaofcircle(5);
    // findevenodd(3);
}
