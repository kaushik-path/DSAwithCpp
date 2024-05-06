//Write a code to generate a BST by providing the ages of students at run time
#include <iostream>
using namespace std;

// Definition of a binary tree node
struct TreeNode {
    int age;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int age) : age(age), left(nullptr), right(nullptr) {}
};

class BST {
private:
    TreeNode* root;

    // Function to insert a node into the BST
    TreeNode* insert(TreeNode* root, int age) {
        if (root == nullptr) {
            return new TreeNode(age);
        }
        if (age < root->age) {
            root->left = insert(root->left, age);
        } else if (age > root->age) {
            root->right = insert(root->right, age);
        }
        return root;
    }

    // Function to perform in-order traversal of the BST
    void inorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        inorderTraversal(root->left);
        cout << root->age << " ";
        inorderTraversal(root->right);
    }

public:
    BST() : root(nullptr) {}

    // Function to insert an age into the BST
    void insert(int age) {
        root = insert(root, age);
    }

    // Function to display the ages in the BST
    void display() {
        cout << "Ages of students in the BST (in-order traversal): ";
        inorderTraversal(root);
        cout << endl;
    }
};

int main() {
    BST bst;

    // Prompt the user to enter ages of students
    cout << "Enter ages of students (enter -1 to stop):" << endl;
    int age;
    while (true) {
        cin >> age;
        if (age == -1) {
            break;
        }
        bst.insert(age);
    }

    // Display the ages in the BST
    bst.display();

    return 0;
}
