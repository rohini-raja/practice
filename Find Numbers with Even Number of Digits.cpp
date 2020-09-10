//leetcode - 10/9/20 , Rohini R 
//Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
         int l= std::to_string(nums[i]).length();
            if(l%2==0){
                count+=1;
            }
        }
        return count;
    }
};
