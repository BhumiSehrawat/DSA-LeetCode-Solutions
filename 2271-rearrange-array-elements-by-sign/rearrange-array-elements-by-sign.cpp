class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        vector<int>result;
        for(int i=0;i<even.size();i++){
            result.push_back(even[i]);
            result.push_back(odd[i]);
        }
        return result;
        
    }
};