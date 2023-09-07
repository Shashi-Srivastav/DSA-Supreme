#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;\

    bool compairString(string a, string b){
        if(a.length() != b.length())
        return false;
        else{
            for (int i = 0; i < a.length(); i++)
            {
                if(a[i] != b[i])
                    return false;
            }
            
        }
        return true;
    }

    bool comp(char x, char y){
        return x>y;
    }

    bool comparatior(int x , int y){
        return y<x;
    }

int main(){
    //creating string----------------------------------
    // string str;
    //input
    // cin>>str;
    //getline(cin,str);
    //printing
    // cout<<str<<endl;

    // cout<<"Length "<<str.length()<<endl;
    // cout<<"isEmpty "<<str.empty()<<endl;
    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;

    //substring-----------------------------------------------
    // cout<<str.substr(0,5)<<endl;//duplicate
    // cout<<str<<endl;//original still same

    //compair function --------------------------------------
    // string a = "Love";
    // string b = "Love";

    // if(a.compare(b) == 0){//case senstive
    //     cout<<"a and b are exactly same thing"<<endl;
    // }
    // else{
    //     cout<<"a and b are not same"<<endl;
    // }
    //or writing a compair function
    // cout<<"A and B string are "<<compairString(a,b)<<endl;

    //find string ---------------------------------------------
    // string sentence = "hello jee kaise ho !";
    // string target = "nothing";

    // cout<<sentence.find(target);//return index
    // if(sentence.find(target) == string::npos){
    //     cout<<"not found!";
    // }

    //replace function ---------------------------------------@pass by ref
    // string p = "this is my name";
    // string q = "shashi";//or

    //cout<<p.replace(0,4,q);//(starting index, till how many index, what to write here!)
    // cout<<p.replace(0,4,"it can be max")<<endl;
    // p.erase(0,18);//(kha se suru krna hai, kha khatam as index);
    // cout<<p<<endl;

    //lexi=icographic order - a,b,c,d,e,f..
    // string s = "shashi";
    // sort(s.begin(),s.end());
    // cout<<s<<endl;//ahhiss
    //Custom Compairot ------------------------------
    // sort(s.begin(),s.end(),comp);
    // cout<<s<<endl;//ssihha

    //eg - 2
    vector<int>arr{5,4,2,3,1};
    // sort(arr.begin(),arr.end());//1 2 3 4 5 
    sort(arr.begin(),arr.end(),comparatior);// 5 4 3 2 1
    for(auto i: arr){
        cout<<i<<" ";
    }

    //custom compatatior ----
    vector<string>str{"love","shashi","goa","pune"};
    //custom sort
    //lexioxalgraphic sort with compartator
    //sum of characrt sort
    //first char lexi.. sort
    // diff diff custom logic in custom comatatior
}