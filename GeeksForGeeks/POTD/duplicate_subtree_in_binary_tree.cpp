// Given a binary tree, find out whether it contains a duplicate sub-tree of size two or more, or not.

// Note: Two same leaf nodes are not considered as subtree as size of a leaf node is one.

// Example 1 :

// Input :
//                1
//              /   \ 
//            2       3
//          /   \       \    
//         4     5       2
//                      /  \    
//                     4    5
// Output : 1
// Explanation :
//     2
//   /   \    
//  4     5
// is the duplicate sub-tree.
// Example 2 :

// Input :
//                1
//              /   \ 
//            2       3
// Output: 0
// Explanation: There is no duplicate sub-tree
// in the given binary tree.

class Solution
{
public:
    unordered_map<string, int> subtreeCount;
    string serializeSubtree(Node *root)
    {
        if (!root)
            return "#";

        if (!root->left && !root->right)
        {
            return to_string(root->data);
        }

        string left = serializeSubtree(root->left);
        string right = serializeSubtree(root->right);
        string serialized = to_string(root->data) + left + right;
        subtreeCount[serialized]++;
        return serialized;
    }
    int dupSub(Node *root)
    {
        subtreeCount.clear();
        serializeSubtree(root);

        for (auto &pair : subtreeCount)
        {
            if (pair.second >= 2)
            {
                return 1;
            }
        }
        return 0;
    }
};