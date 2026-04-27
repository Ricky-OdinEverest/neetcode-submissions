class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {

        int L = 0;
        int R = 1; 
        int res = 1;
        int prev = -1;

        while(R < arr.size())
        {
            if(arr[R - 1] > arr[R] && prev != 1)
            {
                res = max(res , R - L + 1);
                R++;
                prev = 1;
            }
            else if(arr[R - 1] < arr[R] && prev != 0)
            {
                res = max(res , R - L + 1);
                R++;
                prev = 0;
            }
            else
            {
                R = (arr[R] == arr[R - 1]) ? R + 1 : R;
                L = R - 1;
                prev = -1;
            }
        }
        return res;
    }
};