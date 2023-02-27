#include "iostream"
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr){}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* dummy = new ListNode(-1);
        ListNode* p3 = dummy;

        while(p1 != nullptr && p2 != nullptr){
            if((p1 -> val) < (p2-> val)){
                p3-> next = p1;
                p1 = p1 -> next;
            }else{
                p3-> next = p2;
                p2 = p2 -> next;
            }

            p3 = p3-> next;
        }

        while(p1!= nullptr){
            p3 -> next = p1;
            p1 = p1 -> next;
            p3 = p3 -> next;
        }

        while(p2!= nullptr){
            p3 -> next = p2;
            p2 = p2 -> next;
            p3 = p3 -> next;
        }

        return dummy->next;

    }
};

int main(){
    ListNode* list1 = new ListNode(1);
    ListNode* list2 = new ListNode(2);
    ListNode* list3 = new ListNode(4);
    list1 -> next = list2;
    list2 -> next = list3;

    ListNode* list4 = new ListNode(1);
    ListNode* list5 = new ListNode(3);
    ListNode* list6 = new ListNode(4);
    list4 -> next = list5;
    list5 -> next = list6;

    Solution s;
    ListNode* result = s.mergeTwoLists(list1, list4);
    while(result != nullptr){
        cout << result -> val << " ";
        result = result -> next;
    }
    return 0;
}