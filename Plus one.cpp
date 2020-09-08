//LEETCODE - ARRAYS - ROHINI.R - 8/9/20
//PLUS ONE

//Given a non-empty array of digits representing a non-negative integer, increment one to the integer.
//The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
//You may assume the integer does not contain any leading zero, except the number 0 itself.
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1; 
        while(i>=0){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                digits[i]+=1; // add 1 to the last index element
                return digits;
            }
            i--;
        }
        digits.insert(digits.begin(),1); //insert one at the beginning
        return digits;
    }
};
