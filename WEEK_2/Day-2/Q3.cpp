#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.size();
        int m = s.size();
        vector<int> freq_p(26, 0);
        vector<int> freq_s(26, 0);
        int l = 0, r = 0;
        vector<int> ans;
        for (char& ch : p) {
            freq_p[ch - 'a']++;
        }
        while (r < m) {
            freq_s[s[r] - 'a']++;
            if ((r - l + 1) > n) {
                freq_s[s[l] - 'a']--;
                l++;
            }
            if ((r - l + 1) == n) {
                if (freq_p == freq_s) {
                    ans.push_back(l);
                }
            }
            r++;
        }
        return ans;
    }
};