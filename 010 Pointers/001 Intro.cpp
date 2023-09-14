#include <iostream>
using namespace std;
int main()
{
    // int a = 5;
    // int b = 5;
    // cout<<a<<endl;
    // to find address we use address operator
    // cout<<&a<<endl;//0x62febc - hexa dec output
    // cout<<&b<<endl;//a, b address are diff

    // pointer cration
    //  int* ptr = &a;
    // accessing value using derefrence
    //  cout<<*ptr<<endl;//dereferance - output - 5
    //  cout<<ptr<<endl;//gives loc
    //  cout<<&a<<endl;//same address as ptr nd &a pointing to same address

    // ptr dippendency on system archi
    // ptr size is always same @storing address

    // int x = 5;
    // int*p = &x;
    // cout<<sizeof(p)<<endl;//4

    // char y = 'a';
    // char*q = &y;
    // cout<<sizeof(q)<<endl;//4

    // bool z = 12.23;
    // bool*r = &z;
    // cout<<sizeof(r)<<endl;//4

    // int*xuz;//bad practice
    // cout<<*xuz<<endl;//segmentation error

    // null ptr
    //  int*c = 0;
    //  cout<<*c<<endl;// cant access others memeory - segment error

    // Pointer to pointer to pointer ----------
    //  int a = 10;
    //  int* p = &a;
    //  int* q = p;
    //  int* r = q;

    // cout<< a <<endl;//10
    // cout<< &a <<endl;//add of a
    // cout<< p <<endl;//add of a
    // cout<< &p <<endl;//add of p
    // cout<< *p <<endl;//10
    // cout<< q <<endl;//add of a
    // cout<< &q <<endl;//add of q
    // cout<< *q <<endl;//10
    // cout<< r <<endl;//add of a
    // cout<< &r <<endl;//add of r
    // cout<< *r <<endl;//10
    // cout<< (*p + *q + *r) <<endl;//30
    // cout<< (*p)*2 + (*r)*3 <<endl;//50
    // cout<< (*p/2) - (*q)/2 <<endl;//0

    // Class 2 --------------------------------------------------------------------------------------------
    int arr[4] = {12, 33, 44, 55};

    // cout<<arr<<endl;//0x62feb0
    // cout<<arr[0]<<endl;//12
    // cout<<&arr<<endl;//0x62feb0
    // cout<<&arr[0]<<endl;//0x62feb0

    // int*p = arr;
    // cout<<p<<endl;//0x62feb0 - diff
    // cout<<&p<<endl;//0x62feac - diff

    cout << *arr << endl;
    cout << arr[0] << endl;
    cout << *arr + 1 << endl;
    cout << *(arr) + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << arr[1] << endl;
    cout << *(arr + 2) << endl;
    cout << arr[2] << endl;
    cout << *(arr + 3) << endl;
    cout << arr[3] << endl;
}