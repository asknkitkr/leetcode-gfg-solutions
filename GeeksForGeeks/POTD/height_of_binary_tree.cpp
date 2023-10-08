// Given a binary tree, find its height.

// Example 1:

// Input:
//      1
//     /  \
//    2    3
// Output: 2

class Solution
{
public:
    // Function to find the height of a binary tree.
    int height(struct Node *node)
    {
        if (node == NULL)
            return 0;
        int left = height(node->left);
        int right = height(node->right);
        return 1 + max(left, right);

        // return node == NULL ? 0 : 1 + max(height(node->left), height(node->right));
    }
};