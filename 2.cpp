#include <iostream>
#include <cmath>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
   ListNode dummy;
    ListNode* tail = &dummy;
    if (l1->val == 0 && l2->val == 0){
        tail->next = new ListNode(0);
    }
    int carry = 0;
    int sum;
    while (l1 != nullptr && l2 != nullptr){
        sum = l1->val + l2->val + carry;
        tail->next = new ListNode(sum % 10);
        carry = sum / 10;
        tail = tail->next;
        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1 != nullptr){
        sum = l1->val + carry;
        tail->next = new ListNode(sum % 10);
        carry = sum / 10;
        tail = tail->next;
        l1 = l1->next;
    }
    while (l2 != nullptr){
        sum = l2->val + carry;
        tail->next = new ListNode(sum % 10);
        carry = sum / 10;
        tail = tail->next;
        l2 = l2->next;
    }
    if (carry > 0){
        tail->next = new ListNode(carry);
    }
    return dummy.next; 
}

int main(){
    ListNode l3 = {3};
    ListNode l2 = {4,&l3};
    ListNode l1 = {2,&l2};

    ListNode a3 = {4};
    ListNode a2 = {6,&a3};
    ListNode a1 = {5,&a2};

    cout << addTwoNumbers(&l1, &a1)->val << endl;

    return 0;
}