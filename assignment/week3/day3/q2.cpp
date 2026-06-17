class MinStack {
public:
    stack<pair<int, int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if (!st.empty()) {
            int minVal = min(val,st.top().second);
            st.push({val, minVal});
        } else {
            st.push({val, val});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};