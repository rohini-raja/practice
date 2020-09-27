//Leetcode - 27/09/2020
//Reverse words in a string III

class Solution {
public:
    string reverseWords(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                int j=i;
                for(;j<s.length() && s[j]!=' ';j++) {  }
                reverse(s.begin()+i,s.begin()+j);
                i = j-1;
            }
        }
     return s;
    }
};
