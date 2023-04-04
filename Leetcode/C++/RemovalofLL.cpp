#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void insertAthead(ListNode* &head, int d){
    ListNode* temp = new ListNode(d);
    temp -> next = head;
    head = temp;
}

void insertAttail(ListNode* &tail, int d){
    ListNode* temp = new ListNode(d);
    tail -> next = temp;
    tail = temp;
}

void print(ListNode* &head){
    ListNode* temp = head;
    while(temp != NULL){
        //priunt the value
        cout << temp -> val << " ";
        temp = temp -> next;
    }
}

void insertatPosition(ListNode* tail, ListNode* head, int val, int pos){
    ListNode* temp = head;

    if(pos == 0){
        insertAthead(head, val);
        return;
    }

    int count = 1;
    while(count < pos - 1){
        temp = temp -> next;
        count++;
    }

    if(temp->next == NULL){
        insertAttail(tail, val);
        return;
    }
    ListNode* Newlist = new ListNode(val);
    Newlist->next = temp->next;
    temp->next = Newlist;
}




int main(){
    ListNode* Node1 = new ListNode(0);
    ListNode* head = Node1;
    ListNode* tail = Node1;
    insertAttail(tail,1);
    insertAttail(tail,2);
    insertAttail(tail,3);
    insertAttail(tail,4);
    insertAttail(tail,5);
    insertAttail(tail,6);
    insertAttail(tail,7);
    insertAttail(tail,8);
    insertAttail(tail,9);
    insertAttail(tail,10);
    insertatPosition(tail, head, 78);
    print(head);
    return 0;
}