class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute
        // for(int i = 0; i < nums.size();i++){
        //     for(int j = i+1; j < nums.size();j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return{-1,-1};

        // better solution

        //hashing
        map<int,int> mpp;

        for(int i = 0;i < nums.size();i++){
            int x = nums[i];
            int rem =  target - x;
            
            if(mpp.find(rem) != mpp.end()){
                return {i,mpp[rem]};
            }
            mpp[x] = i;
        }
        return{-1,-1};
    }
};