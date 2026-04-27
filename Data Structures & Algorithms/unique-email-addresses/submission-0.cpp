class Solution {
unordered_set<string> updatedEmails;
public:
    int numUniqueEmails(vector<string>& emails) {

        int count = 0;

        for(string email : emails)
        {
            updatedEmails.insert(updateEmail(email));
        }


        return updatedEmails.size();
        
    }

    string updateEmail(string temp)
    {
        string newString = "";

        bool seenPlus = false;
        bool seenAt = false;

        for(auto c : temp)
        {
            if(seenPlus && c != '@' && !seenAt) continue;

            if(c == '.')
            {
                if(!seenAt)
                {
                    continue;
                }
            }
            else if(c == '@')
            {
                seenAt = true;
            }
            else if(c == '+')
            {
                seenPlus = true;
                if(!seenAt)
                {
                    continue;
                }
            }

            newString += c;
        }

        return newString;

    }
};