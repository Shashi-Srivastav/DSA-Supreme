#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;

    // cout<<sizeof(arr)/sizeof(int)<<endl; compilar dependent

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(2);
    arr.pop_back();
    for (int i = 0;i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    };

    vector<int> brr(10, -1);
    for (int i = 0;i<brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    };
    cout<<endl;
    cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;

    vector<int> crr{1,2,3,4,65,7};
    for (int i = 0;i<crr.size(); i++)
    {
        cout<<rr[i]<<" ";
    };  

    return 0;
}