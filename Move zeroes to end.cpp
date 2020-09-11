// Leetcode - 11/09/2020 Rohini R
//Move zeroes to end
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int num = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[num++] = nums[i];
            }
        }
        for(int i = num ;i < nums.size();i++){
           nums[i] = 0; 
        }
       /* int count=0;
        //find(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0){
                swap(nums[i],nums[i+1]);
            }
        }
       // sort(nums.begin(),nums.end());
       // reverse(nums.begin(),nums.end());
     int co;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                nums[co++] = nums[i];
        while(co<size)
            nums[co++] = 0;
            }
        } 
        */
    }
};
