class Solution{
public:
     TreeNode *inorderpredecessor(TreeNode*root,TreeNode* p){
        TreeNode *predecessor=NULL;
        while (root!=NULL)
        {
           if(p->val <= root->val){
                root=root->left;
                
            }
            else{
                predecessor=root;
                root=root->right;
            }
        }
        return predecessor;
    }
}