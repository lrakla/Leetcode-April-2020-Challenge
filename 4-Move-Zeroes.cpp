class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros=0;
        vector<int> nons;
        for(int i:nums){
            if(i!=0){
                nons.push_back(i);
            }
        }
        zeros = nums.size() - nons.size();
        for(int j=0;j<zeros;j++){
            nons.push_back(0);
        }
        for(int k=0;k<nums.size();k++)
            nums[k]=nons[k];
        
    }
};
