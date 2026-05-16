/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int L = 0;
        int R = n;

        while(L <= R)
        {
            int mid = L +((R - L) / 2 );
            int g = guess(mid);
            if(g == 0) return mid;
            else if(g == 1) L = mid + 1;
            else R = mid - 1;
        }
        
        return -1;
    }
};