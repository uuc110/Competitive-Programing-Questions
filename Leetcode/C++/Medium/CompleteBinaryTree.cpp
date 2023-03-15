/* Question No. & Title : 958. Check Completeness of a Binary Tree
 * Problem Statement : Given the root of a binary tree, determine if it is a complete binary tree.
 * Follow up :  Can you solve it in O(n) time?
 * Example 1 :  Input: root = [1,2,3,4,5,6]
 *              Output:          Output: true
 *              Explanation: Every level before the last is full (ie. levels with node-values {1} and {2, 3}), and all nodes in the last level ({4, 5, 6}) are as far left as possible.
 * Example 2 :  Input: root = [1,2,3,4,5,null,7]
 *              Output: false
 * Note: A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.
 * 
 * Approach : Steps =>
 *              1. Perform a level order traversal of the tree.
 *              2. Keep track of whether we've encountered a null node.
 *              3. If we've encountered a null node and we still have nodes in the queue, then the tree is not complete.
 *              4. If we have not returned false before reaching the end of the queue, then the tree is complete.
 * 
 *              Time Complexity : O(n)

 *              Space Complexity : O(n)
 *              Runtime :
 *              Memory :
 *              Beats :
 *              Difficulty : Medium
 *              Ref : https://leetcode.com/problems/check-completeness-of-a-binary-tree/
 */

#include <bits/stdc++.h>

using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    bool isCompleteTree(TreeNode *root) {
        vector<TreeNode *> bfs;
        bfs.push_back(root);
        bool flag = false;
        int i = 0;
        while (i < bfs.size() && bfs[i]) {
            bfs.push_back(bfs[i]->left);
            bfs.push_back(bfs[i]->right);
            i++;
        }

        while (i < bfs.size() && bfs[i] == nullptr) {
            i++;
        }
        return i == bfs.size();
    }
};

int main() {
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(7);
//    cout << s.isCompleteTree(root);
    if (s.isCompleteTree(root)) {
        cout << "Yes";
    } else {
        cout << "No";
    }


    return 0;
}