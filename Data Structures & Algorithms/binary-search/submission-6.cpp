class Solution {
public:
    int search(vector<int>& nums, int target) {

        int L = 0;

        int R = nums.size() - 1;

        while(R >= L)
        {
            int mid = L + ((R - L) / 2);

            if(nums[mid] == target) return mid;
            if(nums[mid] < target) L = mid + 1;
            else if(nums[mid] > target) R = mid - 1;
        }

        return -1;
        
    }
};
