class Solution {
public:
    int findMin(vector<int> &nums) {

        int L = 0;

        int R = nums.size() - 1;

        int low;
         // if this is true the array is not rotated
        if(nums[L] < nums[R]) return nums[L];

        if(nums.size() == 1) return nums[0];

        //if(nums.size() == 2) return nums[1];


        while(L <= R)
        {
           int M = L + ((R - L) / 2);
          
          if( (L + 1) == R )  return min(nums[R], nums[L]);
          if( L == R) return nums[R];
          
            
            //ansr between m and R
            if(nums[L] < nums[M])
            {
                
                L = M;
              
                //if(nums[L] < nums[L + 1]) return nums[L];
            } 
            else if(nums[R] > nums[M])
            {
                R = M;
            }
            
            

        }

        

        return -1;
        
    }
};
