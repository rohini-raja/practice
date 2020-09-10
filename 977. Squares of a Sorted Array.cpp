//leetcode - 10/9/20 , Rohini R
//977. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>B;
        sort(A.begin(),A.end());
        int k=A.size();
        for(int i=0;i<k;i++){
            B.push_back(A[i]*A[i]);
        }
        sort(B.begin(),B.end());
        return B;
    }
};
