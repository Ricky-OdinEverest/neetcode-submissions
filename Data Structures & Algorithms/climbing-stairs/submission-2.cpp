class Solution {

    unordered_map<int, int> *cache;
public:
    int climbStairs(int n) {

        unordered_map<int, int> temp;  // actual map
        cache = &temp;                 // point cache to this map
        return memoization(n);
        
    }

// Memoization
int memoization(int n) {
    if(n == 0) return 1;
    if(n < 0 ) return 0;

    if (cache->count(n)) {
        return (*cache)[n];
    }
    (*cache)[n] = memoization(n - 1) + memoization(n - 2);
    return (*cache)[n];
}
};
