//Using Kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN;
        int max_here = 0;
        int n = nums.size();
        for(int i: nums){
                max_here += i;
                max_so_far = max(max_here,max_so_far);
                max_here = max(0,max_here);
            }      
        return max_so_far;
    }
};
