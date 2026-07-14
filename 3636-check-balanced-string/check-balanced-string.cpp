class Solution {
public:
    bool isBalanced(string num) {
        int sum=0;
        int sum2=0;
        for(int i=0;i<num.size();i+=2)
            sum+=num[i]-'0';
        for(int j=1;j<num.size();j+=2)
            sum2+=num[j]-'0';
        return sum==sum2;
    }
};