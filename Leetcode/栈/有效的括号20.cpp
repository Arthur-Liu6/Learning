//
// Created by RUNYU LIU on 2022/9/29.
//
/*
 * https://leetcode.cn/problems/valid-parentheses/
 */
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

////利用栈的概念来解决
////s = "()[]{}"

class Solution {
public:
    bool isValid(string s) {

     stack<char>s1;
     int len = s.size();

     for(int i = 0; i < len; i++)
     {
         char c =  s.at(i);
         //左括号全部入栈
         if( c == '(' || c == '[' || c == '{')
         {
             s1.push(c);
         }
         //判断右括号是否与栈内左括号匹配
         else
         {
             if(s1.empty()) return false;
             char left = s1.pop();

             if( left == '(' && c != '(') return false;
             if( left == '[' && c != '[') return false;
             if( left == '{' && c != '}') return false;
         }
     }
     return s1.empty();

    }
};


