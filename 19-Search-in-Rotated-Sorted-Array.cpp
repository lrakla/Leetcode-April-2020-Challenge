class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0)
            return -1;
        int first = nums[0];
        int low=0,high=n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            int value = nums[mid];
            if(nums[mid]==target)
                return mid;
            bool am = value>=first;
            bool t = target>=first;
            if(am==t){
                if(value<target)
                    low = mid+1;
                else
                    high = mid-1;
            }
            else{
                if(am)
                    low = mid+1;
                else
                    high = mid-1;
            }
        
        }
       return -1; 
    }
};