#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0;
        int rp = n - 1;
        int curr = 0;
        int maxm = 0;
        while (lp < rp) {
            int wt = rp - lp;
            int ht = min(height[rp], height[lp]);
            curr = wt * ht;
            maxm = max(maxm, curr);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxm;
    }
};