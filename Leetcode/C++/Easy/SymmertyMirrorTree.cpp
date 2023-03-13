/* Question No. & Title : 101. Symmetric Tree
 * Problem Statement : Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
 * Follow up : Could you solve it both recursively and iteratively?
 * Example 1 :  Input: root = [1,2,2,3,4,4,3]
 *              Output: true
 * Example 2 :  Input: root = [1,2,2,null,3,null,3]
 *              Output:  false
 * Note:
 *
 * Approach : Steps =>
 *
 *              Time Complexity : O(N) - as we have to traverse each element of the linked list once and for each element, we are doing a binary search in the array to find the element.
 *              Space Complexity : O(logN) - recursive stack memory usage due to logN height of the tree
 *              Runtime : 4 ms
 *              Memory : 16.4 MB
 *              Beats :  99.98 % of cpp submissions
 *              Difficulty : Easy
 *              Ref :   https://leetcode.com/problems/symmetric-tree/
 */

#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this -> val = val;
    }

    TreeNode(int val, TreeNode* left, TreeNode* right){
        this -> val = val;
        this -> left = left;
        this -> right = right;
    }
};

class Solution{
public:
    bool isSymmetric(TreeNode* root){
        return isMirror(root, root);
    }

    bool isMirror(TreeNode* t1, TreeNode* t2){
        if(t1 == NULL && t2 == NULL) return true;
        if(t1 == NULL || t2 == NULL) return false;

        return (t1 -> val == t2 -> val) && isMirror(t1 -> left, t2 -> right) && isMirror(t1 -> right, t2 -> left);
    }
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(2);

    root -> left -> left = new TreeNode(3);
    root -> left -> right = new TreeNode(4);
    root -> right -> left = new TreeNode(4);
    root -> right -> right = new TreeNode(3);

    cout << s.isSymmetric(root) << endl;

    return 0;
}