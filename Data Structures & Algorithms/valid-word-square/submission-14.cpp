class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        int n = words[0].length();
        if(n != words.size() ) return false;
       
        for(int i = 0; i < words.size(); i++ )
        {
            //if(words.size() != words[i].length()) return false;
            for(int j = 0; j < words[i].length(); j++ )
            {
                if(words[i].length() > n) return false;
                if(i > 0)
                {
                    if(words[i].length() > words[i - 1].length())
                    {
                        return false;
                    }
                }


                if(words[i][j] != words[j][i]) return false;

             

                

            }


        }

        return true;
        
        
    }
};
