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

        return pairs;
    }

    void quickSortHelper(vector<Pair>& arr, int start, int end)
{

    if (end - start + 1 <= 1) return;

    // saved as a temp and for the final lookup.
    Pair pivot = arr[end];

    int left = start;

    for(int i = start; i < end; i++)
    {
        if(arr[i].key <  pivot.key) 
        {
            swap(arr[i], arr[left]);
             left++;
        } 
    }

    arr[end] = arr[left];
    arr[left] = pivot;

    quickSortHelper(arr, start, left - 1);
    quickSortHelper(arr, left + 1, end);



}
};

