// Given a Binary Search Tree, modify the given BST such that it is balanced and has minimum possible height. Return the balanced BST.

// Example1:

// Input:
//        30
//       /
//      20
//     /
//    10
// Output:
//      20
//    /   \
//  10     30

class Solution
{
    vector<int> nodes;

private:
    Node *helper(vector<int> &nums, int left, int right)
    {
        if (left > right)
            return nullptr;

        int mid = left + (right - left) / 2;
        Node *root = new Node(nums[mid]);

        root->left = helper(nums, left, mid - 1);
        root->right = helper(nums, mid + 1, right);

        return root;
    }

    void inorder(Node *node)
    {
        if (!node)
            return;
        inorder(node->left);
        nodes.push_back(node->data);
        inorder(node->right);
    }

public:
    // Your are required to complete this function
    // function should return root of the modified BST
    Node *buildBalancedTree(Node *root)
    {
        inorder(root);
        return helper(nodes, 0, nodes.size() - 1);
    }
};
