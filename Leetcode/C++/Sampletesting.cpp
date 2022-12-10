#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->data = d;
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data;
        if(temp != nullptr){
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* temp = NULL;
    Node* head = temp;
    Node* tail = temp;
    InsertAthead(head, 2);
    InsertAthead(head, 3);
    InsertAthead(head, 4);
    InsertAthead(head, 5);
    InsertAtTail(tail, -1);
    InsertAtTail(tail, -2);
    InsertAtTail(tail, -3);
    InsertAtTail(tail, -4);
    InsertAtTail(tail, -5);
    InsertAtTail(tail, -6);
    print(head);

    return 0;
}

