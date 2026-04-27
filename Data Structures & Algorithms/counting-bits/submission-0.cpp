class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> oneCounts{};
        for(int i = 0; i < n+1; i++)
        {
            int num = i;
            int oneCount = 0;
            while(num > 0)
            {
                if((num % 2) != 0)
                {
                    oneCount++;
                    
                }
                num = num / 2;
            }
            oneCounts.push_back(oneCount);
        }
        return oneCounts;
        
    }
};
