#include <iostream>
using namespace std;
template <typename t>
t mymax(t x, t y)
{
    return (x > y) ? x : y;
}
template<typename z>
z arrMax(z arr[], int n){
    z res = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > res){
        }
        res = arr[i];
    }
    return res;
}
template<typename y>
struct Pair{
    y x, z;
    Pair(y i, y j) {x = i, z = j;}
    y getFirst() {return x;}
    y getSecond() {return z;}
};
int main()
{
    cout<<mymax<int>(23,344)<<endl;
    cout<<mymax<char>('e','t')<<endl;

    //function template ----------------------------
    int arr[] = {10,50,33};
    cout<<arrMax<int>(arr,2)<<endl;
    float arr2[] = {2.1,3.23,9.8,5.01};
    cout<<arrMax<float>(arr2,3)<<endl;

    //Class template ---------------------------------
    Pair<int>p1(29,32);
    cout<<p1.getFirst()<<" ";
    cout<<p1.getSecond()<<" ";
}