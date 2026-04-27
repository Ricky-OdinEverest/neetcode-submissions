// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {

        // break ind
    
        vector<vector<Pair>> res;
        if(pairs.size() == 0 ){return res;}

        res.push_back(pairs);
       
        for( int i = 1 ; i < pairs.size(); i++)
        {
            Pair temp = pairs[i];
            for(int j = i - 1; j >= 0; j--)
            {
                
                if(pairs[j].key > temp.key)
                {
                  
                    pairs[j + 1] = pairs[j];
                    pairs[j] = temp;
                   // temp = pairs[j];
                    
                }
            }
             res.push_back(pairs);
        }

        return res;

    }
};
