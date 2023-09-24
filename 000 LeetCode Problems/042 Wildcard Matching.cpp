class Solution {
public:
    
    //tle - use dp
    bool isMatching(string&s, int si, string&p, int pi){
        //base 
        if(si == s.size() && pi == p.size()){
            return true;
        }
        
        if(si == s.size() && pi < p.size()){
            while(pi < p.size()){
                if(p[pi] != '*') return false;
                pi++;
            }
            return true;
        }
        
        //single char matching
        if(s[si] == p[pi] || '?' == p[pi]){
            return isMatching(s,si+1,p,pi+1);
        }
        
        if(p[pi] == '*'){
            //treat '*' as empty or null
            bool caseA = isMatching(s,si,p,pi+1);
            
            //LET '*' consume one char
            bool caseB = isMatching(s,si+1,p,pi);
            return caseA || caseB;
        }
        return false;
    }
    bool isMatch(string s, string p) {
    int si = 0;
    int pi = 0;
    return isMatching(s,si,p,pi);
    }
};