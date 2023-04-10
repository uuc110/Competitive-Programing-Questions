#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    bool isPalindrome (ListNode* head){
        if(head == nullptr){
            return true;
        }

        ListNode* firstHalf = endofFirstHalf(head);
        ListNode* secondHalf = reverseList(firstHalf->next);

        ListNode* p1 = head;
        ListNode* p2 = secondHalf;

        bool result = true;
        while(result && p2 != nullptr){
            if(p1->val != p2->val) result = false;
            p1 = p1->next;
            p2 = p2->next;
        }

        firstHalf->next = reverseList((secondHalf));
        return result;

    }
private:
    ListNode* endofFirstHalf(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while( fast && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != nullptr){
            ListNode* currTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = currTemp;
        }
        return  prev;
    }

};

int main(){
    Solution s;
    
    
    return 0;
}