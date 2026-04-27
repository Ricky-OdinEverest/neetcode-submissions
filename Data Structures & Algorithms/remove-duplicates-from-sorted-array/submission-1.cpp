
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    // l is used to determine final length of vector
    int l = 0;
    // r is used to step forward and make comparisons
    int r = 0;
    // n is used to make sure our loop does not exceed the size of the array
    int n = nums.size();
    // Starting at 0 while r is less than the length of the array
    while(r < n)
    {
        // init value of nums to the index of r
        nums[l] = nums[r];
        // if r is still less than the length n and the values and index r and l are still equal
        // increment r by one
        while(r < n && nums[r] == nums[l])
        {
            r++;
        }

        // increment l by one to keep up with r
        l++;
    }
    return l;



    }
 
};