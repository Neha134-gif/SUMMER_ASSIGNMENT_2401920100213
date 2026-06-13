#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = needle.size();
        int n = haystack.size();
        int l = 0, r = 0;
        while (r < n) {
            if ((r - l + 1) > k) {
                l++;
            }
            if ((r - l + 1) == k) {
                if (needle == haystack.substr(l, r - l + 1)) {
                    return l;
                }
            }
            r++;
        }
        return -1;
    }
};