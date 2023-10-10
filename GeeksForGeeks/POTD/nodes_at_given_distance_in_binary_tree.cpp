// Given a binary tree, a target node in the binary tree, and an integer value k,
// find all the nodes that are at distance k from the given target node.
// No parent pointers are available.

// Note:
// You have to return the list in sorted order.
// The tree will not contain duplicate values.
// Example 1:

// Input:
//           20
//         /    \
//       8       22
//     /   \
//    4    12
//        /   \
//       10    14
// Target Node = 8
// K = 2
// Output: 10 14 22
// Explanation: The three nodes at distance 2
// from node 8 are 10, 14, 22.

class Solution
{
private:
    vector<int> res;

    void findKDistanceNodes(Node *root, int k)
    {
        if (root == NULL || k < 0)
            return;
        if (k == 0)
        {
            res.push_back(root->data);
            return;
        }

        findKDistanceNodes(root->left, k - 1);
        findKDistanceNodes(root->right, k - 1);
    }

    int findTarget(Node *root, int target, int k)
    {
        if (root == NULL)
            return -1;
        if (root->data == target)
        {
            findKDistanceNodes(root, k);
            return 0;
        }

        int leftDistance = findTarget(root->left, target, k);
        if (leftDistance >= 0)
        {
            if (leftDistance + 1 == k)
            {
                res.push_back(root->data);
            }
            else
            {
                findKDistanceNodes(root->right, k - leftDistance - 2);
            }
            return leftDistance + 1;
        }

        int rightDistance = findTarget(root->right, target, k);
        if (rightDistance >= 0)
        {
            if (rightDistance + 1 == k)
            {
                res.push_back(root->data);
            }
            else
            {
                findKDistanceNodes(root->left, k - rightDistance - 2);
            }
            return rightDistance + 1;
        }

        return -1;
    }

public:
    vector<int> KDistanceNodes(Node *root, int target, int k)
    {
        res.clear();
        findTarget(root, target, k);
        sort(res.begin(), res.end());
        return res;
    }
};