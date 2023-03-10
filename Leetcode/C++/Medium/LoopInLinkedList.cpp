/* Question No. & Title : 142. Linked List Cycle II
 * Problem Statement :  Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
 * Follow up :  Can you solve it without using extra space?
 * Example 1 :  Input: head = [3,2,0,-4], pos = 1
 *              Output: tail connects to node index 1
 * Example 2 :  Input: head = [1,2], pos = 0
 *              Output: tail connects to node index 0
 * Note: Do not modify the linked list.
 *
 * Approach : 1. Use Floyd's cycle detection algorithm to find the meeting point of slow and fast pointer.
 *           2. Move the slow pointer to head and move both slow and fast pointer by one step until they meet.
 *           3. Return the meeting point.
 *           Time Complexity : O(n)
 *           Space Complexity : O(1)
 *           Runtime : 8 ms
 *           Memory : 8.1 MB
 *           Beats : 100% of C++ submissions
 *           Difficulty : Medium
 *           Ref : https://www.youtube.com/watch?v=LUm2ABqAs1w
 */

#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode* slow= head;
       ListNode* fast = head;

       while(fast && fast -> next){ // Floyd's cycle detection algorithm
            slow = slow -> next; // slow pointer moves by one step
            fast = fast -> next -> next; // fast pointer moves by two steps
            if(slow == fast){ // if slow and fast pointer meet, break the loop
               break;
            }
       }

       while(head != slow){ // move slow pointer to head and move both slow and fast pointer by one step until they meet
           head = head -> next;
           slow = slow -> next;
       }
       return head; // return the meeting point
    }
};

int main(){
    Solution s;
    ListNode* head = new ListNode(3);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(0);
    head -> next -> next -> next = new ListNode(-4);
    head -> next -> next -> next -> next = head -> next;
    ListNode* ans = s.detectCycle(head);
    cout << ans -> val << endl;
    return 0;
}
