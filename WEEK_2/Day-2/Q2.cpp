#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int freqS1[26] = {0};
        int freqS2[26] = {0};
        for (int i = 0; i < s1.size(); i++) {
            freqS1[s1[i] - 'a']++;
        }
        int l = 0, r = 0;
        while (r < s2.size()) {
            freqS2[s2[r] - 'a']++;
            if (r - l + 1 > n) {
                freqS2[s2[l] - 'a']--;
                l++;
            }
            if (r - l + 1 == n) {
                bool same = true;
                for (int i = 0; i < 26; i++) {
                    if (freqS1[i] != freqS2[i]) {
                        same = false;
                        break;
                    }
                }
                if (same) {
                    return true;
                }
            }
            r++;
        }
        return false;
    }
};