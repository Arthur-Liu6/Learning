//
// Created by RUNYU LIU on 2022/9/27.
//

#include "反转链表206.h"
#include <iostream>
#include <list>
#include <algorithm>

/*
 * https://leetcode.cn/problems/reverse-linked-list/
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//递归
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if( head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* newhead = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;

        return newhead;
    }
};

//迭代

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        while( head != nullptr)
        {
            ListNode* tmp = head->next;

            head->next = ListNode* newhead ;

            newhead = head;

            head = tmp;
        }

    }
};