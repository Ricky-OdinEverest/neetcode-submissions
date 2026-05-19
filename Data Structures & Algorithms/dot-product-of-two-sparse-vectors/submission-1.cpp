class SparseVector {
public:

vector<pair<int, int>> pairs;

    
    SparseVector(vector<int> &nums) {

            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] != 0)
                {
                    pairs.push_back({i, nums[i]});
                }
            }
 
        
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {

        int total = 0; int p1 = 0; int p2 = 0;
         while (p1 < pairs.size() && p2 < vec.pairs.size())
         {
            if (pairs[p1].first == vec.pairs[p2].first)
            {
                total += pairs[p1].second * vec.pairs[p2].second;
                p1++;
                p2++;       
            } 
            else if (pairs[p1].first > vec.pairs[p2].first)
            {
                p2++;
            }
            else
            {
                p1++;
            }

         }

        
        return total;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);
