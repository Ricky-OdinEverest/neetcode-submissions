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

        int i = 1;
        

        for(;;)
        {
            int M = i + ((n - i) / 2);

            int g = guess(M);
            g < 0 ? n = M - 1 : i = M + 1;
            if(g == 0) return M;


        }

        return -1;
        
    }
};