/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    struct info
    {
        int min;
        int max;
        bool isbst;
        int sum;

    };

    info fun(TreeNode* root,int &maxsum)
    {
        if(root==NULL)
            return {INT_MAX,INT_MIN,true,0};

        if(root->left==NULL && root->right==NULL)
        {
            maxsum=max(maxsum,root->val);
            return {root->val,root->val,true,root->val};
        }

        info l= fun(root->left,maxsum);
        info r= fun(root->right,maxsum);

        if(l.isbst && r.isbst && l.max < root->val && r.min > root->val)
        {
            int sum= root->val+l.sum+r.sum;
            maxsum= max(maxsum,sum);

            int inmin=min(l.min,min(r.min,root->val));
            int inmax=max(l.max,max(r.max,root->val));

            return {inmin,inmax,true,sum};
        }

        return {INT_MIN,INT_MAX,false,0};

    }

    int maxSumBST(TreeNode* root) {

        int maxsum=0;

        fun(root,maxsum);

        return maxsum;


    }




};

