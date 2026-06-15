#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int l = 0, r = 0;
        while (r < n) {
            if (s[r] == ' ') {
                reverse(s.begin() + l, s.begin() + r);
                l = r + 1;
            }
            r++;
        }
        reverse(s.begin() + l, s.end());
        return s;
    }
};