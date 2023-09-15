#include <iostream>
using namespace std;
void solve(int arr[])
{
    cout << "Size of arr inside solve fx " << sizeof(arr) << endl;
}
void update(int *p)
{
    cout << "address stored inside p is : " << p << endl; // address stored inside p is : 0x62febc
    cout << "Address of p is : " << &p << endl;           // Address of p is : 0x62fea0
}
void util(int *p)
{
    //p = p + 1;//change in copy @ pass by value
    *p = *p + 1;//pass by ref as pointer a = 6 now;
}
void solvee(int**p){
   // p = p+1;//12 - change in copy
   // *p = *p+1;//change in **p value - acc to +1 address from its value
    **p = **p+1;//12 - 12+1 - 13
}
void solveee(int*& p){
    p = p+1;
}
int main()
{
    // int a = 5;
    // int b = 5;
    // cout<<a<<endl;
    // to find address we use address operator
    // cout<<&a<<endl;//0x62febc - hexa dec output
    // cout<<&b<<endl;//a, b address are diff

    // pointer cration
    //  int* ptr = &a;// *ptr = a - error
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
    // int arr[4] = {12, 33, 44, 55};

    // cout<<arr<<endl;//0x62feb0
    // cout<<arr[0]<<endl;//12
    // cout<<&arr<<endl;//0x62feb0
    // cout<<&arr[0]<<endl;//0x62feb0

    // int*p = arr;
    // cout<<p<<endl;//0x62feb0 - diff
    // cout<<&p<<endl;//0x62feac - diff

    // cout << *arr << endl;//12
    // cout << arr[0] << endl;//12
    // cout << *arr + 1 << endl;//13
    // cout << *(arr) + 1 << endl;//13
    // cout << *(arr + 1) << endl;//33
    // cout << arr[1] << endl;//33
    // cout << *(arr + 2) << endl;//44
    // cout << arr[2] << endl;//44
    // cout << *(arr + 3) << endl;//55
    // cout << arr[3] << endl;//55

    // int i = 0;
    // cout<<arr[i]<<endl;//12
    // cout<<i[arr]<<endl;//12
    // cout<<*(arr+i)<<endl;//12
    // cout<<*(i+arr)<<endl;//12

    // int arr[10];
    // cout<<sizeof(arr)<<endl;// 4bytes*10 = 40

    // int*ptr = arr;
    // cout<<sizeof(ptr)<<endl;//4/8 system dep
    // cout<<sizeof(*ptr)<<endl;//4

    // char ch[10] = "Shashi";
    // char*c = ch;
    // cout<<ch<<endl;//shashi
    // cout<<&ch<<endl;//0x62fe23
    // cout<<ch[0]<<endl;//s
    // cout<<&c<<endl;//0x62feb0
    // cout<<*c<<endl;//s
    // cout<<c<<endl;//shashi

    // char name[9] = "ShErBano";
    // char* c = &name[0];
    // cout<<name<<endl;//ShErBano
    // cout<<&name<<endl;//0x62feb7
    // cout<<*(name+3)<<endl;//r
    // cout<<c<<endl;//ShErBano
    // cout<<&c<<endl;//0x62feb0
    // cout<<*(c+3)<<endl;//r
    // cout<<c+2<<endl;//ErBano
    // cout<<*c<<endl;//s
    // cout<<c+8<<endl;//\0

    // char ch = 'k';
    // char* cptr = &ch;
    // cout<<cptr<<endl;//printing till found \0 - k╗■b

    // char name[10] = "Shashi";
    // cout<<name<<endl;//Shashi - good practice as temp memo to main mem by copy

    // char*c = "Shashi";
    // cout<<c<<endl;//Shashi - bad practice as temp stored and *c pointing to temp string may loss data

    // Pointer with function ---------------------------------------------------------
    //  int arr[10] = {1,2,3,4};
    //  cout<<"Size of arr inside main fx "<<sizeof(arr)<<endl;//40
    //  solve(arr);//4 @pass by ref as a pointer not array

    // int a = 5;
    // cout<<"Addrss af a is "<<&a<<endl;//Addrss af a is 0x62febc
    // int*ptr = &a;
    // cout<<"Address stored in ptr is : "<<ptr<<endl;//Address stored in ptr is : 0x62febc
    // cout<<"Address of ptr is : "<<&ptr<<endl;//Address of ptr is : 0x62feb8
    // update(ptr);
    // cout<<"value of a is : "<<a<<endl;//value of a is : 5

    // Class 3 ------------------------------------------------------------------------------------------------

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << &a << endl;//0x62feb8
    // cout << a << endl;//5
    // cout << p << endl;//0x62feb8
    // cout << &p << endl;//0x62feb4
    // cout << *p << endl;//5
    // cout << q << endl;//0x62feb4
    // cout << *q << endl;//0x62feb8
    // cout << **q << endl;//5

    // int a = 5;
    // int *p = &a;

    // cout << "before" << endl;
    // cout << a << endl;//5
    // cout << p << endl;//0x62feb8
    // cout<<*p<<endl;//5

    // util(p);

    // cout<<"after"<<endl;
    // cout << a << endl;//6
    // cout<<p<<endl;//0x62feb8
    // cout<<*p<<endl;//6

    // int x = 12;
    // int * p = &x;
    // int**q = &p;
    // solvee(q);
    // cout<<x<<endl;

    //Pointer Pass by Val & Pass by Refrenece-----

    int a = 12;
    int* p = &a;
    cout<<"before "<<p<<endl;//before 0x62febc
    solveee(p);
    cout<<"after "<<p<<endl;//after 0x62fec0 
    return 0;
}