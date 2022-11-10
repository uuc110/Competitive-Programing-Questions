#include <bits/stdc++.h>

using namespace std;


class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};


class Solution {
public:



    int getlen(ListNode* head) {
        int len = 0;
        while(head != nullptr){
            head = head -> next;
            len++;
        }
        return len;
    }
    ListNode* middleNode(ListNode *head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
//        int len = getlen(head);
//        int ans = (len/2) +1 ;
//        ListNode* temp = head;
//        int count= 0;
//        while(count <= ans){
//            temp = temp -> next;
//            count++;
//        }

        ListNode* fast = head -> next;
        ListNode* slow = head;
        while(fast != NULL){
            fast = fast -> next;
            if(fast!=NULL){
                fast = fast -> NULL;
            }
            slow = slow -> next;
        }
        return  slow;
//        return temp;

    }
};