class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int current=0;
        for(int i=0;i<2;i++){
            current+=nums[i];
        }
        unordered_set<int> st;
        st.insert(current);
        for(int i=1;i<nums.size()-1;i++){
            current=current-nums[i-1]+nums[i+1];
            if(st.find(current)!=st.end()){
                return true;
            }
            st.insert(current);
        }
        return false;
        
    }
};