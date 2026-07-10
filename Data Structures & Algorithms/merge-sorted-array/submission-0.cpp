class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int num2pointer = 0;
        int mCount = 1;

        for(int i = 0; i < nums1.size(); i++)
        {
            if(mCount > m)
            {
                if(num2pointer < n)
                {
                    nums1[i] = nums2[num2pointer++];
                }
            }

            mCount++;
        }

        if(num2pointer < n - 1)
        {
            for(int i = num2pointer; i < n; i++ )
            {
                nums1.push_back(nums2[num2pointer++]);
            }
        }

        return sort(nums1.begin(), nums1.end());
        
    }
};