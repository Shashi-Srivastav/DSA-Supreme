#include<iostream>
using namespace std;
int printConting(int n){
    //base case
    if(n == 0){
        return n;//return will always use here
    }

    //processing
    // cout<<n<<" ";// 5 4 3 2 1

    //recursive relation
    printConting(n-1);
}

    int fib(int n){
        //base case
        if(n == 1){
            //first term
            return 0;
        }
        if(n == 2){
            //second term
            return 1;
        }

        //RR - f(n) = f(n-1) + f(n-2);
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
int main(){
    // int n;
    // cout<<"Enter the value to reverse print it "<<endl;
    // cin>>n;
    // printConting(n);
    
    //Fibonacii Serices ----------------------------------------------------

    cout<<"Enter the term you want to see"<<endl;
    int n;
    cin>>n;
    int ans = fib(n);
    cout<<n<<"th term is : "<<ans<<endl;
}