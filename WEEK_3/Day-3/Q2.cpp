#include <bits/stdc++.h>
using namespace std;
class MinStack {
public:
    MinStack() {}
    stack<pair<int, int>> st;

    void push(int value) {
        if (st.empty()) {
            st.push({value, value});
        } else {
            int minVal = min(value, st.top().second);
            st.push({value, minVal});
        }
    }

    void pop() { st.pop(); }

    int top() { return st.top().first; }

    int getMin() { return st.top().second; }
};