class Solution {
public:
    int countElements(vector<int>& arr) {
        int num =0;
        int n = arr.size();
        vector<int>::iterator it; 
        for(int j=0;j<n;j++){
            it = find(arr.begin(), arr.end(), (arr[j]+1)); 
            if(it!=arr.end()){
                
                num = num+ 1;
                
            }
        }
        return num;
        
    }
};