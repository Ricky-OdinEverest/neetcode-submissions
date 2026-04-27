class Solution {
public:
    int search(vector<int>& nums, int target)
     {
        int left = 0;
        int right = nums.size();
       
              while (left < right) 
              {
       
                int middle = left + ( right - left) / 2;

                if(nums[middle] == target) return middle;

                else if(nums[middle] < target )
                {
                    
                    //Prevent loop
                    left = middle +1;
                }
                    
               

                else if(nums[middle] > target)
                {
                right = middle;


                 }
              }
            return -1;
             
    }
};
