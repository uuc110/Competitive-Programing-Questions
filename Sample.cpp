#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    ListNode* next;

    ListNode(int x){
        data = x;
        next = nullptr;
    }
};

vector<ListNode*> CreateVectorList(ListNode* head, int val){
    ListNode* temp = new ListNode(val);
    head ->next = temp;
    temp = head;
    return
}

int main(){
    //create vector of linked list where each index containn a linked list inside it
    vector<ListNode*> v;
    ListNode* head = new ListNode(1);
    ListNode* temp = head;
    for(int i = 2; i < 6; i++){
        ListNode* temp = new ListNode(i);
        head -> next = temp;
        head = temp;
    }
    v.push_back(temp);
    //create a new linked list
    ListNode* head2 = new ListNode(1);
    ListNode* temp2 = head2;
    for(int i = 2; i < 6; i++){
        ListNode* temp2 = new ListNode(i);
        head2 -> next = temp2;
        head2 = temp2;
    }
    v.push_back(temp2);
    //print the vector
    for(int i = 0; i < v.size(); i++){
        ListNode* temp = v[i];
        while(temp != nullptr){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }



    return 0;
}