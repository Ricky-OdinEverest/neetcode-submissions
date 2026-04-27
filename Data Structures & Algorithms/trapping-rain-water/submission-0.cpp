class Solution {
public:
    int trap(vector<int>& height) {

        if(height.size() < 3) return 0;

        vector<int> prefixMax;
        vector<int> suffixMax(height.size(), 0);
        prefixMax.push_back(height[0]);
        for(int i = 1; i < height.size(); i++)
        {
           prefixMax.push_back(max(height[i],prefixMax[i - 1]));
        }
        suffixMax[height.size() - 1] = (height[height.size() - 1]);
        for(int i = height.size() - 2; i >= 0; i--)
        {
           suffixMax[i] = (max(height[i],suffixMax[i + 1]));
        }

        
        int waterArea = 0;


    for(int i = 0; i < height.size(); i++)
    {
        int currHeight = min(prefixMax[i ], suffixMax[i ]) - height[i];
        if(currHeight >= 1)  waterArea += currHeight ; 

       
    }
        return waterArea;

      //return suffixMax[3];
        
    }
};
