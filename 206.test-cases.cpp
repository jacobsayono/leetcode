#include "206.reverse-linked-list.cpp"
#include <iostream>

int main() {
    Solution sol;
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = nullptr;

    ListNode* reversedList = sol.reverseList(n1);

    ListNode* current = reversedList;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;

    current = reversedList;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }
}
