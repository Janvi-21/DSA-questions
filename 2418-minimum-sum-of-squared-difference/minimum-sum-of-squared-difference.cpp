class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1,
                               vector<int>& nums2,
                               int k1, int k2) {

        int n = nums1.size();

        vector<long long> diff(n);

        long long k = (long long)k1 + k2;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            sum += diff[i];
        }

        if (k >= sum)
            return 0;

        sort(diff.rbegin(), diff.rend());

        diff.push_back(0);

        int i = 0;

        while (i < n) {

            long long cnt = i + 1;

            long long cost =
                (diff[i] - diff[i + 1]) * cnt;

            if (cost <= k) {
                k -= cost;
                i++;
            }
            else {
                break;
            }
        }

    
        long long cnt = i + 1;

        long long dec = k / cnt;
        long long rem = k % cnt;

        long long ans = 0;

        for (int j = 0; j < cnt; j++) {

            long long x = diff[i] - dec;

            if (j < rem)
                x--;

            ans += x * x;
        }

        for (int j = cnt; j < n; j++) {
            ans += diff[j] * diff[j];
        }

        return ans;
    }
};