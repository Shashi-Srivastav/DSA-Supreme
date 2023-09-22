class Solution {
public:
    void rmvOcc(string& s, string& p){
        int found = s.find(p);
        if(found != string::npos){
            string left = s.substr(0,found);
            string right = s.substr(found+p.size(),s.size());
            s = left + right;
            rmvOcc(s,p);
        }
        else {
            //b.c
            return;
        }
    }
    string removeOccurrences(string s, string part) {
        rmvOcc(s,part);
        return s;
    }
};