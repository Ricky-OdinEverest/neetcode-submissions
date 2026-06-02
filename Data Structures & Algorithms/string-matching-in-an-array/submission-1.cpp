class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
       
      
        unordered_set<string> resultSet;

        for(int i = 0; i < words.size(); i++)
        {
            string temp = words[i];
            for(int j = 0; j < words.size(); j++)
            {
                if(j != i)
                {
                    if(words[i].length() < words[j].length())
                    {
                         for(int c = 0; c < words[j].length(); c++)
                         {
                            if(words[j][c] == words[i][0])
                            {
                               string sub = words[j].substr(c, words[i].length());
                                if(temp == sub)
                                {
                                    resultSet.insert(sub);
                                }
                            }
                         }
                    }
                }
            }
        }
          vector<string> res(resultSet.begin(), resultSet.end());
        return res;
    }
};