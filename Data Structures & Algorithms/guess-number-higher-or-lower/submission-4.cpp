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

        int L = 1; 
        int R = n;

        while(L <= R)
        {
            int M = L + ((R - L) / 2);

            int g = guess(M);
            
            if(!g) return M;

            g < 0 ? R = M - 1 : L = M + 1;

        }

        return -1;
        
    }
};