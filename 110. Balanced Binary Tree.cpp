// https://leetcode.com/problems/balanced-binary-tree/description/

class Solution {
public:
    int dfs(TreeNode* root){
      if(root==NULL) return 0;
      int leftT=dfs(root->left);
      if(leftT==-1) return -1;
      int rightT=dfs(root->right);
      if(rightT==-1) return -1;
      if(abs(leftT-rightT)>1) return -1;
      return max(leftT,rightT)+1;
    }
    bool isBalanced(TreeNode* root) {
      return dfs(root) != -1;
    }
};
