class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long sum = 0;
        for(auto it : nums) sum += it;
        int max = *max_element(nums.begin(), nums.end());
        return nums.size() * max -sum;
        
        
    }
};