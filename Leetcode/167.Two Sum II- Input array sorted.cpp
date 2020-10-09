//Leetcode 167 - Two sum II - Input array is sorted
//R.Rohini - 23/09/2020

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
     /*   vector<int> two_sum;
      int l=numbers.size();
       if(numbers.size()==0) return 0; 
    base case
       for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
            if(numbers[i]+numbers[j]==target){
                two_sum.push_back(i+1);
                two_sum.push_back(j+1);
            }
            }
        }return two_sum;*/
        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                return {left+1,right+1};
            }
            else if(numbers[left]+numbers[right]>target){
                right--;
            }
            else if(numbers[left]+numbers[right]<target){
                left++;
            }
        }
        return {};
    }
};
