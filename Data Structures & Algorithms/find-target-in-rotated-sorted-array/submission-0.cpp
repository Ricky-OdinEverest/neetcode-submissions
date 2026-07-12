class Solution {
public:
    int search(vector<int>& nums, int target) {

        int L = 0;
        int R = nums.size() - 1;

        while(L <= R)
        {
            int mid = L + ((R - L) / 2);
            int found = nums[mid];
            if(found == target) return mid;

            if(nums[L] <= found)
            {
                if(target > found || target < nums[L])
                {
                    L = mid + 1;
                } else{
                    R = mid - 1;
                }
            }
            else
            {
                if(target < found || target > nums[R])
                {
                    R = mid - 1;
                }else{
                    L = mid + 1;
                }
            }
        }

        return -1;


        
    }
};
