class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> arr;
    vector<int> mins;
    stack<int> s;
    MinStack() {
      
    }
    
    void push(int x) {
        s.push(x);
        arr.push_back(x);
        mins.push_back(*min_element(arr.begin(),arr.end()));  
    }
    
    void pop() {
        s.pop();
        arr.pop_back();
        mins.push_back(*min_element(arr.begin(),arr.end()));
        
    }
    
    int top() {
        return s.top();    
    }
    
    int getMin() {
        return mins.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */