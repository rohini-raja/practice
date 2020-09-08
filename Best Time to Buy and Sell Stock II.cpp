//LEETCODE - ROHINI.R,8-SEP-20
//You can solve this problem using three approaches
//1.Using recursion-backtracking (time complexity-O(3^n) will be high)
//2.Using dynamic programming - use lookup table
//3. EASY AND SIMPLEST APPROACH WILL BE *VALLEY-PEAK APPROACH*
class Solution {
public:
	//2 CONSTRAINTS - 1.You have to buy a stock before selling , 2.You can't buy and sell on the same day
    int maxProfit(vector<int>& prices) {
   //   ios_base::sync_with_stdio(false);
   //   cin.tie(NULL); - Template used in competitive programming to optimize the input, output operations.
        int n=prices.size();
        int profit =0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){  //whenever the stocks are in ascending order add it to the profit or else skip.
                profit+=(prices[i] - prices[i-1]);
            }
        }
         return profit;
    }
};
