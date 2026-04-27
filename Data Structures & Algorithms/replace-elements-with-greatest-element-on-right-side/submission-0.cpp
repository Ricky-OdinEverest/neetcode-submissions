class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int second = 0;
        int R = arr.size() - 1;

        int greatest = arr[R];

        arr[R--] = -1; 
        
        while(R >= 0)
        {
            if(arr[R] > greatest)
            {
                second = greatest;
                greatest = arr[R];
                arr[R] = second;
            }
            else if(arr[R] < greatest)
            {
                arr[R] = greatest;
            }

            R--;
        }

        return arr;
    }
};