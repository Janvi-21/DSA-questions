
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        const int MOD = 1e9 + 7;

        long long even = 1;
        long long odd = 0;
        long long ans = 0;

        int parity = 0; // 0 = even, 1 = odd

        for (int x : arr) {

            parity ^= (x % 2);

            if (parity == 0) {
                even++;
                ans = (ans + odd) % MOD;
            }
            else {
                odd++;
                ans = (ans + even) % MOD;
            }
        }

        return ans;
    }
};
