class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int k=0,p=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='#'){
                k--;
                k=max(0,k);
                
            }
            else {
                S[k]=S[i];
                k++;
            }
        }
        
        for(int i=0;i<T.size();i++){
            if(T[i]=='#'){
                p--;
                p=max(0,p);
                
            }
            else{
                T[p]=T[i];
                p++;
            }
        }
        if(k!=p)
            return false;
    
    
        for(int i=0;i<k;i++)
            {
                if(S[i]!=T[i])
                    return false;
            }
            return true;
        
        
        
    }
};