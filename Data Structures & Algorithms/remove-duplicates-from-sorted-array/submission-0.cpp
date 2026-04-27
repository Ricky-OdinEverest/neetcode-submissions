
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> s;
        for(int num : nums)
        {
    
            s.insert(num);
        }
        nums.assign(s.begin(), s.end());
        return s.size();

    }
 
};