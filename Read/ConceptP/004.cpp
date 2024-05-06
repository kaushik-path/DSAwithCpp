// Write  code to traverse a binary tree in terms Of post-order traversal approach
#include <iostream>

using namespace std;

// Definition of a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTree {
public:
    // Function to perform post-order traversal of a binary tree
    void postorderTraversal(TreeNode* root) {
        if (root == NULL)
            return;
        
        // Traverse left subtree
        postorderTraversal(root->left);
        
        // Traverse right subtree
        postorderTraversal(root->right);
        
        // Visit current node
        cout << root->val << " ";
    }
};

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Instantiate the BinaryTree class
    BinaryTree tree;

    // Perform post-order traversal
    cout << "Post-order traversal: ";
    tree.postorderTraversal(root);

    return 0;
}
