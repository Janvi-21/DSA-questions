class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i< n;i++){
            if(nums[i] < 0){
                nums[i] = -1*nums[i];
            }

        }

       sort(nums.begin(), nums.end());
        long ns = 0;
        for(int i = 0; i< n/2;i++){
            ns+= (long) (nums[i]*nums[i]); 
        }
        long ps =0;

        for(int i =n/2;i<n;i++){
            ps+= (long) (nums[i]*nums[i]); 
        }

        long ans = (ps-ns);
        return ans;
        
    }
};