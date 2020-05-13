class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        const int n = nums.size();
        vector<int> output(n);
        vector<int> pref;
        pref.push_back(1);
        for(int k:nums)
            pref.push_back(pref.back()*k);
        vector<int> suf(n+1);
        suf[n]=1;
        for(int j=n-1;j>=0;--j){
            suf[j]=nums[j]*suf[j+1];
        }
       
        for(int i=0;i<n;i++){
            output[i]=pref[i]*suf[i+1];
            
        }
  
        return output;
    }
};