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
    int num1 = 0;
    int num2 = 0;

    int i = 0;
    ListNode* cur = l1;
    while (cur != nullptr){
        num1 += pow(10,i) * cur->val;
        i++;
        cur = cur->next;
    }

    i = 0;
    cur = l2;
    while (cur != nullptr){
        num2 += pow(10,i) * cur->val;
        i++;
        cur = cur->next;
    }

    int total = num1 + num2;
    i = 1;
    cur = l1;
    while (cur != nullptr){
        cur->val = (total/i) % 10;
        i *= 10;
        cur = cur->next;
    }
    return l1;
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