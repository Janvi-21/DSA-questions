class Solution {
public:
    int singleNumber(vector<int>& nums) {
  
    unordered_map<int,int> mpp;
    for(auto it : nums){
        mpp[it]++;
    }

    for(auto z:mpp)
		   if(z.second==1)
			   return z.first;
    return -1;
    }

};