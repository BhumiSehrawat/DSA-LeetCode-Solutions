class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        bool found=false;
        for(int i=0;i<nums.size();i++){
            int digit=nums[i]*nums[i];
            ans.push_back(digit);
            found=true;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};