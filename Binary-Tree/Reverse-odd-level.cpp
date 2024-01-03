// Problem : https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/  

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
class Solution {
public:
    // Function to reverse the values of nodes at odd levels in a binary tree
    TreeNode* reverseOddLevels(TreeNode* root) {
        // Using a queue for level order traversal
        queue<TreeNode*> q;
        // Start from the root
        q.push(root);
        // Variable to keep track of the current level
        int level = 0;
        // Vector to store nodes at each level for later processing
        vector<TreeNode*> v;
        // Vector to store values of nodes at odd levels for reversal
        vector<int> temp;

        // Perform level order traversal
        while (!q.empty()) {
            int nodeCount = q.size();
            while (nodeCount--) {
                // Process each node at the current level
                TreeNode* curNode = q.front();
                q.pop();
                // Store the node for later processing
                v.push_back(curNode);
                // Enqueue left and right children if they exist
                if (curNode->left)
                    q.push(curNode->left);
                if (curNode->right)
                    q.push(curNode->right);
                // If the current level is odd, store the value for reversal
                if (level % 2)
                    temp.push_back(curNode->val);
            }

            // Reverse the values at odd levels
            reverse(temp.begin(), temp.end());

            // Update the values of nodes at odd levels
            for (int i = 0; i < temp.size(); i++) {
                v[i]->val = temp[i];
            }

            // Clear vectors for the next level
            v.clear();
            temp.clear();

            // Move to the next level
            level++;
        }

        // Return the modified root of the binary tree
        return root;
    }
};
