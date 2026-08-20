class MinStack {
    stack<pair<int, int>> st; // {value, minimum up to this point}

public:
    MinStack() {}

    void push(int value) {
        int currentMin = st.empty() ? value : min(value, st.top().second);
        st.push({value, currentMin});
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