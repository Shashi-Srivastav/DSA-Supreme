#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int getLength(char arr[])
{
    int length = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        length++; // counter
        i++;      // no of ele in array as by user
    }
    return length;
}

void reverseString(char name[100])
{
    int i = 0;
    int n = getLength(name);
    int j = n - 1;
    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

void replaceString(char name[])
{
    int i = 0;
    int j = getLength(name) - 1;
    while (i <= j)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
        else
        {
            i++;
        }
    }
}
bool findPalindrome(char arr[])
{
    int i = 0;
    int n = strlen(arr);
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

void convertLowerToUpper(char arr[])
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}

void convertUpperToLower(char arr[]){
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'A' + 'a';
    }
    
}

int main()
{
    // Q Find length of array after input elem in arr-----------------------
    //  char array[100];
    //  cin>>array; //input - shashi srivastava
    //  cout<<array<<endl;//shashi - no tab / spaces read
    //  using getline
    //  cin.getline(array, 100);//input - shashi srivastava
    //  cout<<array<<endl;//output - shashi srivastava

    // char name[100];
    // cin>>name;

    // cout<<"length of arr : "<<getLength(name)<<endl;
    // or
    // cout<<"length of arr using stl :"<<strlen(name)<<endl;

    // Prob 2 - Reverse a string ---------------------------------------------

    // char name[100];
    // cin>>name;
    // reverseString(name);
    // cout<<name<<endl;

    // Prob Replace all spaces by @ --------------------------------------------
    //  char name[100];
    //  cin.getline(name,100);
    //  replaceString(name);
    //  cout<<"Replaced Array : "<<name<<endl;

    // Palindrome ------------------------------------------------------------
    // noon - noon
    //  char arr[100] = "babbab";
    //  cout<<"Is it palindrome ? "<<findPalindrome(arr);

    // Prob Convert LowerCase TO UpperCase ----------------------------------
    //a -> a - a + A -> A
    // char arr[100];
    // cin.getline(arr, 100);
    // convertLowerToUpper(arr);
    // cout << "Lower to upper : " << arr << endl;

    // Prob Convert UpperCase TO LowerCase  ----------------------------------
    //A -> A - A + a -> a
//     char arr[100];
//     cin.getline(arr, 100);
//     convertUpperToLower(arr);
//     cout << "Upper to lower : " << arr << endl;
}