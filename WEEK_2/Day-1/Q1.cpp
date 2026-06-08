#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqs[26] = {0};
        int freqt[26] = {0};
        int n = s.size();
        int i;
        if (s.size() != t.size()) {
            return false;
        }
        for (i = 0; i < n; i++) {
            freqs[s[i] - 'a']++;
            freqt[t[i] - 'a']++;
        }
        for (i = 0; i <= 25; i++) {
            if (freqs[i] != freqt[i]) {
                return false;
            }
        }
        return true;
    }
};