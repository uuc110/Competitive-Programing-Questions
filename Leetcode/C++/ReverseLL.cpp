#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
public:
    Node *removeElements(Node *head, int val) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        Node *curr = head;
        Node *temp = curr->next;

        while (temp != NULL) {
            if (temp->data == curr->data) {
                free(temp);
                free(curr);
            }
            if (temp->next == NULL) {
                curr->next = NULL;
                free(temp);
                temp = curr;
            } else if (temp->data == val) {
                curr->next = temp->next;
                temp = temp->next;
                // delete(temp);
            }
            curr = curr->next;
            temp = temp->next;
        }
        curr = head;
        return curr;
    }
};

// PRINTING OF NODE

void print(Node *&tail) {
    Node *temp = tail;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout << endl;
}

// INSERT AT TAIL

void insertAttail(Node *&tail, int d) {
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

int getlen(Node *&head) {
    Node *temp = head;
    int len = 0;
    while (temp != head) {
        temp = temp->next;
        len++;
    }
    return len;
}

// REVEVRSE OF LINKED LIST

Node *Reverse(Node *&head) {
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return prev;
}

//REMOVE NODE

Node *removeatPos(Node *&head, Node *&tail, int pos) {
    Node *temp = head;
    Node *rem = head->next;
    int count = 1;
    while (count < pos - 1) {
        temp = temp->next;
        rem = rem->next;
        count++;
    }

    temp->next = rem->next;
    free(rem);
    return head;

}

//NODE GENERATOR MAIN FUNTION

int main() {
    Solution s;
    Node *node1 = new Node(7);
    Node *head = node1;
    Node *tail = node1;
//    Node* node2 = new Node(2);
//    node1 -> next = node2;
//    Node* node3 = new Node(3);
//    node2 -> next = node3;
//    Node* node4 = new Node(4);
//    node3 -> next = node4;
//    Node* node5 = new Node(5);
//    node4 -> next = node5;
//    Node* node6 = new Node(6);
//    node5 -> next = node6;
//    Node* node7 = new Node(7);
//    node6 -> next = node7;
//    Node* node8 = new Node(8);
//    node7 -> next = node8;
//    Node* node9 = new Node(9);
//    node8 -> next = node9;
//    Node* node10 = new Node(4);
//    node9 -> next = node10;

    for (int i = 0; i < 3; ++i) {
        insertAttail(tail, 7);
    }


    int data = 7;

    s.removeElements(head, data);

    print(head);
}




