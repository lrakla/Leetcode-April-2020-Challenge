class FirstUnique {
    unordered_map<int,int> count;
    queue<int> q;
public:
    FirstUnique(vector<int>& nums) {
        for(int i:nums)
            add(i);
    }
    
    int showFirstUnique() {
         while(!q.empty() && count[q.front()]>=2)
             q.pop();
        if(q.empty())
            return -1;
            
        
        return q.front();
    }
    
    void add(int value) {
        count[value]++;
        q.push(value);
        
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */