/* Question No. & Title : 108. Convert Sorted Array to Binary Search Tree
 * Problem Statement : Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.
 * Follow up : A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
 * Example 1 :  Input:  [-10,-3,0,5,9]
 *              Output: [0,-3,9,-10,null,5]
 * Example 2 :  Input:  [1,3]
 *              Output:  [3,1]
 * Note:
 *
 * Approach : Steps =>
 *
 *              Time Complexity : O(NlogN) - as we have to traverse each element of the linked list once and for each element, we are doing a binary search in the array to find the element.
 *              Space Complexity : O(logN) - recursive stack memory usage due to logN height of the tree
 *              Runtime :
 *              Memory :
 *              Beats :
 *              Difficulty : Medium
 *              Ref Leetcode: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
 */

#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode (int val){
        this -> val = val;
    }

    TreeNode(int val, TreeNode* left, TreeNode* right) {
        this ->val = val;
        this ->left = left;
        this ->right = right;
    }
};

class Solution{
public:

    TreeNode* bst(vector<int>& arr, int s, int e){
        if(s > e) return NULL;

        int mid = (s + e) / 2;
        TreeNode* root = new TreeNode(arr[mid]);

        root -> left = bst(arr, s, mid -1);
        root -> right = bst(arr, mid+1, e);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bst(nums,0, nums.size()-1);
    }
};

int main(){
    Solution s;
    vector<int> nums = {-10, -3, 0, 5, 9};
    s.sortedArrayToBST(nums);

    return 0;
}