class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s1=INT_MIN;
        int s2 =0;
        for(int i:prices){
            s1 = max(s1,s2-i);
            s2=max(s2,s1+i);
        }
        
        return s2;
    }
};