//
// Created by RUNYU LIU on 2022/9/26.
//
#include "删除链表中的节点237.h"
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

/*
 * https://leetcode.cn/problems/delete-node-in-a-linked-list/
 */

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node)
    {
        //覆盖当前结点的data域
        node->val = node->next->val;
        //将当前结点的next域指向下一个结点的next域的next
        node->next = node->next->next;
    }
};

