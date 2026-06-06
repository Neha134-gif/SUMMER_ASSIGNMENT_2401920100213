#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int indx = n - 1;
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[indx] = nums[left] * nums[left];
                left++;
            } else {
                ans[indx] = nums[right] * nums[right];
                right--;
            }
            indx--;
        }
        return ans;
    }
};