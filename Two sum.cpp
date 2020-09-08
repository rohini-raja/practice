//LEETCODE - ROHINI.R , 8/9/20
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int l=nums.size();
        for(int i=0;i<l-1;i++){
            for(int j=i+1;j<l;j++){
            	//check whether the numbers on addition result the target and push backs the indexes.
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
  return v;
    }
};
