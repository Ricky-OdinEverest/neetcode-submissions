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
    vector<Pair> mergeSort(vector<Pair>& pairs) 
    {
        int start = 0;

        int end = pairs.size() - 1;

        mergeSortHelper(pairs, start, end);

        return pairs;
    }

   void mergeSortHelper(vector<Pair>& pairs, int start, int end)
    {
        if(end - start + 1 <= 1) return;

        int mid = start + ((end - start) / 2);

        mergeSortHelper(pairs, start, mid);

        mergeSortHelper(pairs, mid + 1, end);

        merge(pairs, start, mid, end);

    }

   void merge(vector<Pair>& pairs, int start, int mid, int end)
   {

        vector<Pair> L(pairs.begin() + start, pairs.begin() + mid + 1);
        vector<Pair> R(pairs.begin() + mid + 1, pairs.begin() + end + 1);

        int i = 0; // index for L
        int j = 0; // index for R
        int k = start; // index for pairs

        while(i < L.size() && j < R.size())
        {
            if(L[i].key <= R[j].key)
            {
                pairs[k] = L[i];
                ++i;
            } 
            else
            {
                pairs[k] = R[j];
                ++j;
            }
            ++k;
        }

        while (i < L.size()) {
            pairs[k] = L[i];
            ++i;
            ++k;
        }
        while (j < R.size()) {
            pairs[k] = R[j];
            ++j;
            ++k;
        }


   }


};
