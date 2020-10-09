//Leetcode - 27/09/2020
//Pair of songs divisible by 60
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<int> c(60);
        int res = 0;
        for(int t:time){
            res+=c[(600-t)%60];
            c[t%60]+=1;
        }
    return res;
    }
};
