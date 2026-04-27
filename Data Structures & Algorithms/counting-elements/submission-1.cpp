class Solution {
public:
    int countElements(vector<int>& arr) {

        unordered_map<int,int> count;
        int res = 0;

        for(int num : arr)
        {
            count[num]++;
        }

        for(int num : arr)
        {
            if(count[num + 1] >= 1)
            {
                res += 1;
            }
            
        }
        
        return res;
    }
};
