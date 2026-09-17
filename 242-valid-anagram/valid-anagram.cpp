class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int x:s){
            mp1[x]++;
        }
        for(int y:t){
            mp2[y]++;
        }
        if(mp1==mp2){
            return true;
        }
        return false;

        
    }
};