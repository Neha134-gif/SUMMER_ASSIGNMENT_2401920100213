#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int buy = prices[0];

        int curr = 0;

        int maxim = 0;

        for (int i = 1; i < n; i++) {
            // profit if sold today
            curr = prices[i] - buy;

            // maximum profit 
            maxim = max(maxim, curr);

            // next better buying 
            if (prices[i] < buy) {
                buy = prices[i];
            }
        }

        return maxim;
    }
};