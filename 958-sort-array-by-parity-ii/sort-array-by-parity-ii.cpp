class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 ){
                even.push_back(nums[i]);
                
            }else{
                odd.push_back(nums[i]);
            }     
        }
        vector<int> ans(nums.size());
        for(int i = 0, j = 0; i < nums.size(); i += 2, j++) {
            ans[i] = even[j];
        }
        for(int i = 1, j = 0; i < nums.size(); i += 2, j++) {
            ans[i] = odd[j];
        }
        return ans;
    }
};