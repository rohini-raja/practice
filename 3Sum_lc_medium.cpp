//LEETCODE - [MEDIUM] 3Sum - R.Rohini , 9/9/20
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        //Check whether the array is empty
        if(nums.empty()){
            return result;
        }
        //sort the given elements
        sort(nums.begin(),nums.end());
        int k=nums.size();
        for(int i=0;i<k;i++){
            if(nums[i]>0) break;
            //we have seen this already so skip!
            if((i>0) && (nums[i]==nums[i-1])){
                continue;
            }
            int left = i+1;
            int right = k-1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum<0){
                    left++;
                }
                else if(sum>0){
                    right--;
                }
                else{
                    result.push_back({nums[i],nums[left],nums[right]});
                    int lef_t = nums[left], righ_t = nums[right];
                    while((left<right) && (nums[left]==lef_t)) left++;;
                    while((left<right) && (nums[right]==righ_t)) right--;
                }
            }
        }
        return result;
    }
};
