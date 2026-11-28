class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a = nums.size();
        vector<int> r(a);
        int p = 0, n =1;
        for(int i = 0; i < a; i++){
            if(nums[i] < 0) {
                r[n] = nums[i];
                n+=2;
            }
            else{
                r[p] = nums[i];
                p+=2;
            }
        }
        return r;
    }
};