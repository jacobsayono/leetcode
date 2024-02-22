/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (63.90%)
 * Likes:    21097
 * Dislikes: 2012
 * Total Accepted:    3.9M
 * Total Submissions: 6.1M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * You are given the heads of two sorted linked lists list1 and list2.
 * 
 * Merge the two lists into one sorted list. The list should be made by
 * splicing together the nodes of the first two lists.
 * 
 * Return the head of the merged linked list.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: list1 = [1,2,4], list2 = [1,3,4]
 * Output: [1,1,2,3,4,4]
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: list1 = [], list2 = []
 * Output: []
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: list1 = [], list2 = [0]
 * Output: [0]
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * The number of nodes in both lists is in the range [0, 50].
 * -100 <= Node.val <= 100
 * Both list1 and list2 are sorted in non-decreasing order.
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // edge cases for empty linked-lists
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }

        // create dummy node as pre-index
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;  // traversal pointer
        while (list1 != nullptr && list2 != nullptr) {  // when one list is fully traversed, exit
            if (list1->val <= list2->val) {
                curr->next = list1;  // start to build curr with nodes
                list1 = list1->next;  // increment list1
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;  // increment curr
        }
        if (list1 == nullptr) {  // if one finished first
            curr->next = list2;  // add the rest to curr's next
        } else {
            curr->next = list1;
        }
        return dummy->next;  // return to start of list
    }
};
// @lc code=end

