#include<iostream>
#include<string>
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
    string p = "this is my name";
    string q = "shashi";//or

    //cout<<p.replace(0,4,q);//(starting index, till how many index, what to write here!)
    cout<<p.replace(0,4,"it can be max")<<endl;
    p.erase(0,18);//(kha se suru krna hai, kha khatam as index);
    cout<<p<<endl;
}