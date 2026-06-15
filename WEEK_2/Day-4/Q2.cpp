#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ']') {
                st.push(string(1, s[i]));
            } else {
                string temp = "";
                while (st.top() != "[") {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop(); // remove '['
                string num = "";
                while (!st.empty() && isdigit(st.top()[0])) {
                    num = st.top() + num;
                    st.pop();
                }

                int n = stoi(num);

                string res = "";

                for (int j = 0; j < n; j++) {
                    res += temp;
                }

                st.push(res);
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};