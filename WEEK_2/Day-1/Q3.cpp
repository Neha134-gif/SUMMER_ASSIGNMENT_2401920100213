#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq1[26] = {0};
        int freq2[26] = {0};
        for (int i = 0; i < ransomNote.size(); i++) {
            freq1[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i < magazine.size(); i++) {
            freq2[magazine[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq2[i] < freq1[i]) {
                return false;
            }
        }
        return true;
    }
};