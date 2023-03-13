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

        sortArray(arr);
        return arr;
    }

    void conquer(vector<int> &arr, int start, int mid, int ending, vector<int>& tempArr){

        int index1 = start;
        int index2 = mid +1;
        int x = 0;

        while(index1 <= mid && index2 <= ending){
            if(arr[index1] <= arr[index2]){
                tempArr[x++] = arr[index1++];
            }else{
                tempArr[x++] = arr[index2++];
            }
        }

        while(index1 <= mid){
            tempArr[x++] = arr[index1++];
        }

        while(index2<=ending){
            tempArr[x++] = arr[index2++];
        }

        for(int i = 0; i < x; i++){
            arr[start+i] = tempArr[i];
        }
    }

    void divide(vector<int> &arr, int start, int ending, vector<int>& temparr){
        if(start >= ending) return;
        int mid = start + (ending - start) / 2;

        divide(arr, start, mid,temparr);
        divide(arr, mid+1, ending, temparr);
        conquer(arr, start, mid, ending,temparr);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int> TempArrr(nums.size());
        divide(nums, 0, nums.size()-1, TempArrr);
        return nums;
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
