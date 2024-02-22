#include "21.merge-two-sorted-lists.cpp"
#include <iostream>

int main() {
    ListNode* list1 = new ListNode(1);
    ListNode* list2 = new ListNode(2);
    ListNode* list3 = new ListNode(4);
    list1->next = list2;
    list2->next = list3;

    ListNode* tist1 = new ListNode(1);
    ListNode* tist2 = new ListNode(3);
    ListNode* tist3 = new ListNode(4);
    tist1->next = tist2;
    tist2->next = tist3;

    Solution sol;
    ListNode* list = sol.mergeTwoLists(list1, tist1);

    while (list != nullptr) {
        std::cout << list->val << std::endl;
        list = list->next;
    }

}