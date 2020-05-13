class LRUCache {
private:
    list<int> accessed;
    unordered_map<int,pair<int,list<int>::iterator>> values; //hold current elements of cache
    int c;
    void erase(int key){
        auto it = values.find(key);
        assert(it!=values.end());
        accessed.erase(it->second.second);
        values.erase(it);
        
    }
    void push(int key,int value){
        accessed.push_back(key);
        values[key]={value,prev(accessed.end())};
        
    }
public:
    LRUCache(int capacity) {
        c=capacity;
        
    }
    
    int get(int key) {
        auto it = values.find(key);
        if(it==values.end()){
            return -1;
        }
        int old = it->second.first;
        erase(key);
        push(key,old);
        return old;
    }
    
    void put(int key, int value) {
        if(values.find(key)!=values.end()){
            erase(key);
        }
         if((int)values.size()==c){
             assert(!accessed.empty());
             erase(accessed.front());
         }
        push(key,value);
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */