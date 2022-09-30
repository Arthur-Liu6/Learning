//
// Created by RUNYU LIU on 2022/9/28.
//

/*
 * https://leetcode.cn/problems/linked-list-cycle/
 */

////快慢指针
class 141.环形链表 {
public:
    bool hasCycle(ListNode *head) {
        if( head == nullptr || head.next == nullptr) return false;

        ListNode* fast = head->next;
        ListNode* slow = head;

        while( fast != nullptr && fast->next != nullptr)
        {
            if( fast == slow) return true;
            fast = fast->next->next;
            slow = slow->next;
        }
        return false;
    }
};