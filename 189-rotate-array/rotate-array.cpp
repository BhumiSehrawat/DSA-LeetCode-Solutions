class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int>q;
        for(int x:nums){
            q.push(x);
        }
        int n=nums.size();
        k=k%n;
        for(int i=0;i<n-k;i++){
            int x=q.front();
            q.pop();
            q.push(x);
        }
        for(int i=0;i<n;i++){
            nums[i]=q.front();
            q.pop();
            
        }

        
    }
};