class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int n = s.length();
        int t=0;
        for (vector<int> i :shift){
            if(i[0]==0){
                t-=i[1];
            }
            else{
                 t+=i[1];
            }    
            
        }
        t%=n;
        if(t<0)
            t+=n;
               
        return s.substr(n-t) + s.substr(0,n-t);
        
    }
};