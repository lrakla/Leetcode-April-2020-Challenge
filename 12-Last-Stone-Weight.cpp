class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> stn;
    for (int i:stones)
        stn.push(i);
    while(stn.size()>1){
        int y = stn.top();
        stn.pop();
        int x = stn.top();
        stn.pop();
        if(y!=x)
            stn.push(y-x);
            
    } 
         
        return stn.empty()?0:stn.top(); 
    }
    
};

