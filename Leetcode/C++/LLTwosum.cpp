#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution: public ListNode {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* temp = l1;
    ListNode* temp2 = l2;
    while(temp && temp2 != nullptr){
        int carry = (temp -> val + temp2 -> val) / 10;
        int sum = temp -> val + temp2 -> val + carry;

        int
    }
}
};

int main(){

    Solution s;

    ListNo

    return 0;
}