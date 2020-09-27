//Leetcode - 27/09/2020
//Remove Adjacent duplicates
class Solution {
public:
    string removeDuplicates(string S) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int k = S.size();
        int i ,j=0;
        for(i=0;i<k;++i,++j){
            S[j] = S[i];
            if(j>0 && S[j-1]==S[j])
                j-=2;
        }
        return S.substr(0,j);
    }
};
