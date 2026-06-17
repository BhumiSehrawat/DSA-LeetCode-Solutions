class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        bool found =false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                found=true;
                ans.push_back(i);
                
            }

        }
        if(!found){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        
        return {ans.front(),ans.back()};
    }
};