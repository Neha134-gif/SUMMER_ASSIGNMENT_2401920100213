#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0, r = 0;
        int n = s.size();
        int m = t.size();
        while (r < m && l < n) {
            if (s[l] == t[r]) {
                l++;
                r++;
            } else {
                r++;
            }
        }
        if (l == n) {
            return true;
        }
        return false;
    }
};