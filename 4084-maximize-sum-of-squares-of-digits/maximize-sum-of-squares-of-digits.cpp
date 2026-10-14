class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        // the biggest possible digit sum is 9 * num
        if (sum > 9 * num) return "";

        string ans;

        //  filling every position 
        while (num-- > 0) {
            int digit = min(9, sum);   // take as much as we can, at most 9
            ans += char('0' + digit);
            sum -= digit;
        }

        return sum == 0 ? ans : "";
    }
};