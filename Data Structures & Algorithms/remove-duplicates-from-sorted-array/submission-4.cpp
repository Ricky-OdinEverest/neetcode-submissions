
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

 int s = 0;
 int f = 0;
 int n = nums.size();

 while(f < n)
 {
    nums[s] = nums[f];

    while(f < n && nums[s] == nums[f])
    {
        f += 1;
    }

    s += 1;
 }

return s;

    }
 
};