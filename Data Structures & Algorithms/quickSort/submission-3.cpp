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
    vector<Pair> quickSort(vector<Pair>& pairs)
    {
        int end = pairs.size() - 1;

        quickSortHelper(pairs, 0, end);

        return  pairs;
    }

    void quickSortHelper(vector<Pair>& pairs, int start, int end)
    {

        if (end - start + 1 <= 1) 
        {
            return;
        }
        Pair pivot = pairs[end];
        // we switch this with pivot at the end;
        int left = start;

        for(int i = start; i < end; i++)
        {
            if(pairs[i].key < pairs[end].key)
            {
                swap(pairs[i], pairs[left]);
                left++;
            }
            
        }

        pairs[end] = pairs[left];
        pairs[left] = pivot;

        quickSortHelper(pairs, start, left - 1 );

        quickSortHelper(pairs, left + 1, end);

    }
};
