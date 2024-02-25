#include "141.linked-list-cycle.cpp"
#include <iostream>

int main() {
    ListNode* list1 = new ListNode(3);
    ListNode* list2 = new ListNode(2);
    ListNode* list3 = new ListNode(0);
    ListNode* list4 = new ListNode(-4);
    list1->next = list2;
    list2->next = list3;
    list3->next = list4;
    list4->next = list2;

    Solution sol;
    std::cout << sol.hasCycle(list1) << std::endl;
}