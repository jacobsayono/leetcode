#include "100.same-tree.cpp"
#include <iostream>

int main() {
    TreeNode* p1 = new TreeNode(1);
    TreeNode* p2 = new TreeNode(2);
    TreeNode* p3 = new TreeNode(3);
    TreeNode* p4 = new TreeNode(4);
    TreeNode* p5 = new TreeNode(5);
    TreeNode* p6 = new TreeNode(6);
    TreeNode* p7 = new TreeNode(7);

    TreeNode* q1 = new TreeNode(1);
    TreeNode* q2 = new TreeNode(2);
    TreeNode* q3 = new TreeNode(3);
    TreeNode* q4 = new TreeNode(4);
    TreeNode* q5 = new TreeNode(5);
    TreeNode* q6 = new TreeNode(6);
    TreeNode* q7 = new TreeNode(7);

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
    p3->left = p6;
    p3->right = p7;

    q1->left = q2;
    q1->right = q3;
    q2->left = q4;
    q2->right = q5;
    q3->left = q6;
    q3->right = q7;

    Solution sol;
    std::cout << sol.isSameTree(p1, q1) << std::endl;
}