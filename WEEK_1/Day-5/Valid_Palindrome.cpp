#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for (char ch : s) {
            if (isalnum(ch)) {
                ans += tolower(ch);
            }
        }
        int n = ans.size();
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            if (ans[l] != ans[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};