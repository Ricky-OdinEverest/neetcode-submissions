class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int k = 0; 

        for(int i = 0; i < nums.size(); i++)
        {
            if(s.find(nums[i]) != s.end())
            {

            }
            else
            {
                k++;
                s.insert(nums[i]);

            }
        }
        nums.assign(s.begin(), s.end()); 
        return k;

    }
};