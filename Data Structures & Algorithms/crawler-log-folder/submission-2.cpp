class Solution {
public:
    int minOperations(vector<string>& logs) {
        int dist = 0;
        for(string l : logs)
        {
            if(l == "../" )
            {
                  dist = max(0, dist - 1);
                  continue;
            }
            else if(l == "./")
            {

            }
            else
            {
                dist++;
            }



        }

        return dist;
        
    }
};