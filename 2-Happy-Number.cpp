class Solution {
    int f(int n){
        int sum = 0;
        while(n){
           int digit = n%10;
           n/=10; 
          sum +=digit*digit; 
            }
        return sum;
    }
    
public:
    bool isHappy(int n) {
        unordered_set<int> occ;
        while(true){
        n  = f(n);
        if (n==1 || n==7)
            return true;
        if(occ.count(n)==1)
            return false;
         occ.insert(n);   

      
        }
    }    
};