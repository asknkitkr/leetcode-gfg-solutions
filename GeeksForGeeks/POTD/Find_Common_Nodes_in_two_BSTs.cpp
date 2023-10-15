// Given two Binary Search Trees. Find the nodes that are common in both of them, ie- find the intersection of the two BSTs.

// Note: Return the common nodes in sorted order.

// Example 1:

// Input:
// BST1:
//                   5
//                /     \
//              1        10
//            /   \      /
//           0     4    7
//                       \
//                        9
// BST2:
//                 10
//               /    \
//              7     20
//            /   \ 
//           4     9
// Output: 4 7 9 10

class Solution
{
private:
    void helper(Node *root, vector<int> &inorder)
    {
        if (root == nullptr)
            return;
        helper(root->left, inorder);
        inorder.push_back(root->data);
        helper(root->right, inorder);
    }

public:
    // Function to find the nodes that are common in both BST.
    vector<int> findCommon(Node *root1, Node *root2)
    {
        vector<int> ans;

        vector<int> t1, t2;
        helper(root1, t1);
        helper(root2, t2);

        int i = 0, j = 0;
        while (i < t1.size() && j < t2.size())
        {
            if (t1[i] == t2[j])
            {
                ans.push_back(t1[i]);
                i++, j++;
            }
            if (t1[i] < t2[j])
                i++;
            if (t1[i] > t2[j])
                j++;
        }

        return ans;
    }
};