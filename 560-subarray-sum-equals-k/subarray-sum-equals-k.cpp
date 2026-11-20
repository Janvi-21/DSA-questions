class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int subarray = 0;

        // brute
        // for(int i =0; i< nums.size();i++){
        //     int sum = 0;
        //     for(int j = i ; j < nums.size();j++){
        //         sum += nums[j];

        //         if(sum == k ) subarray++;
        //     }
        // }

        // better

        unordered_map<int,int> presum;
        presum[0] = 1;
        int sum = 0;
        for(int num : nums){
            sum += num;
            // if(sum == k) subarray++;

            if(presum.find(sum - k) != presum.end()){
                subarray += presum[sum - k];
            }
            presum[sum]++;
        }
        
        return subarray;
    }
};