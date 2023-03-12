#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    ListNode* LinkList(vector<ListNode*>& lists) {
        ListNode* temp = new ListNode(0);
        ListNode* head = temp;
        for(int i=0; i< lists.size();i++){
            ListNode* current = lists[i];
            while(current){
                temp -> next = current;
                current = current -> next;
                temp = temp -> next;
            }
        }
        vector<int> t = ListToArray(head -> next);

        ListNode* temp2 = new ListNode(0);
        ListNode* head2 = temp2;
        for(int i=0; i< t.size();i++){
            ListNode* current = new ListNode(t[i]);
            temp2 -> next = current;
            temp2 = temp2 -> next;
        }
        return head2 -> next;

    }
private:
    vector<int> ListToArray(ListNode* &List){
        vector<int> arr;
        ListNode* temp = List;
        while(temp){
            arr.emplace_back(temp->val);
            temp = temp -> next;
        }

        sort(arr.begin(), arr.end());
        return arr;
    }
};



int main() {
    Solution s;
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* list3 = new ListNode(2);
    list3->next = new ListNode(6);

    vector<ListNode*> lists = {list1, list2, list3};

    ListNode* result = s.LinkList(lists);
    while(result){
        cout << result -> val << " ";
        result = result -> next;
    }

    cout << endl;

    return 0;
}
