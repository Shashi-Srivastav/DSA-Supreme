class Solution {
public:
    bool isAnagram(string s, string t) {
        int HashTable[256] = {0};
        for(int i = 0;i<s.size();i++){
            HashTable[s[i]]++;//increment each char int value @ char to int in HashTable
        }
        for(int i = 0;i<t.size();i++){
            HashTable[t[i]]--;//decrementing each char int value
        }
        for(int i = 0;i<256;i++){
            if(HashTable[i] != 0){
                return false;
            }
        }
        return true;
    }
};