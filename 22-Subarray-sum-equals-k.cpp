class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int pref= 0;
        int answer=0;
        unordered_map<int,int> countpref;
        countpref[0]++;
        for(int i=0;i<n;i++) {
            pref+=nums[i];
            int need = pref-k;
            answer += countpref[need];
            countpref[pref]++;
            
        }
        return answer;
    }
    
};