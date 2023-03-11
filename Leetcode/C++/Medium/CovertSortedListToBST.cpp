/* Question No. & Title : 109 Convert Sorted List to Binary Search Tree
 * Problem Statement :  Given the head of a singly linked list where elements are sorted in ascending order convert
 * it to a height balanced BST. For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differs by more than 1.
 * Follow up : Could you solve it with O(n) time complexity?
 * Example 1 :  Input:  [-10,-3,0,5,9]
 *              Output: [0,-3,9,-10,null,5]
 * Example 2 :  Input: head = []
 *              Output: []
 * Note:
 * Approach : Steps =>
 *              Time complexity: O(NlogN) - as we have to traverse each element of the linked list once and for each element, we are doing a binary search in the array to find the element.
 *               Space complexity: O(logN) - recursive stack memory usage due to logN height of the tree
 *              Runtime :
 *              Memory :
 *              Beats :
 *              Difficulty : Medium
 *              Ref :
 */

#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 Definition for a binary tree node.
 */
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
    TreeNode *bst(ListNode *head, ListNode *tail) {
        if (head == tail) return nullptr;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != tail && fast->next != tail) {
            slow = slow->next;
            fast = fast->next->next;
        }

        TreeNode *root = new TreeNode(slow->val);
        root->left = bst(head, slow);
        root->right = bst(slow->next, tail);

        return root;
    }

    TreeNode *sortedListToBST(ListNode *head) {
        if (head == nullptr) return nullptr;
        return bst(head, nullptr);
    }

};


int main() {
    ListNode* head = new ListNode(-10);
    head->next = new ListNode(-3);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(9);
    Solution sol;
    TreeNode* root = sol.sortedListToBST(head);

    return 0;
}