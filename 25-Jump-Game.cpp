class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for(int jump=0;i<n && i <= jump;++i){
            jump=max(i+nums[i],jump);
        
            
        }
        return i==n;
    }
};