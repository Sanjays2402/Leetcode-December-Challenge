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
class BSTIterator {
public:
    int index = 0;
    vector<int> list;
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return ;
        inorder(root->left);
        list.push_back(root->val);
        inorder(root->right);
    }
    
    int next() {
        return list[index ++];
    }
    
    bool hasNext() {
        return (index < list.size());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
