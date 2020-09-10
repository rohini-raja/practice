//leetcode - 10/9/20 , Rohini R 
//Maximum consecutive ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count,count=0;
        for(auto n:nums){
         if(n==1) max_count = max(++count,max_count);
         else count=0;
        }
        return max_count;
    }
};
