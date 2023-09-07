class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i = s.find(part);
        while(i != string::npos){
            s.erase(i,part.length());
            i = s.find(part);//updated @ if not it will go in infi loop
        }
        return s;
    }
};