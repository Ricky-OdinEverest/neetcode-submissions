class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

    priority_queue<int> max_pq(nums.begin(), nums.end());

    for (int i = 0; i < k - 1; ++i)
    {
        max_pq.pop();
    }

    return max_pq.top();
        
    }
};
