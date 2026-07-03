class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a'|| ch == 'e'|| ch == 'i'||ch == 'o'|| ch == 'u';
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        int maxi=count;
        for(int i=1;i<=s.size()-k;i++){
            if(isVowel(s[i-1])){
                count--;
            }
            if(isVowel(s[i+k-1])){
                count++;
            }
            maxi=max(maxi,count);
        }
        return maxi;
        
    }
};