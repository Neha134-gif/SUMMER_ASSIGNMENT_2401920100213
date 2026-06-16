#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int i = 0;
        int idx = 0;

        while (i < n) {

            char ch = chars[i];
            int cnt = 0;

            while (i < n && chars[i] == ch) {
                cnt++;
                i++;
            }

            chars[idx++] = ch;

            if (cnt > 1) {
                string s = to_string(cnt);

                for (char c : s) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
    }
};