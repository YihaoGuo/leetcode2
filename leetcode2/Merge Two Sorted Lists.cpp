//
//  Merge Two Sorted Lists.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/23.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* tmp1=l1;
        ListNode* tmp2=l2;
         ListNode* tmp3=new ListNode(0);
         ListNode* tmp0=tmp3;
        while (tmp1!=nullptr||tmp2!=nullptr) {
            while (tmp1!=nullptr&&tmp2!=nullptr) {
                if (tmp1->val>=tmp2->val) {
                    tmp3->next=tmp2;
                    tmp3=tmp2;
                    tmp2=tmp2->next;
                    continue;
                }
                if (tmp1->val<=tmp2->val) {
                    tmp3->next=tmp1;
                    tmp3=tmp1;
                    tmp1=tmp1->next;
                    continue;
                }
                
            }
            while (tmp1!=nullptr) {
                tmp3->next=tmp1;
                return tmp0->next;
                
                
            }
            while (tmp2!=nullptr) {
                tmp3->next=tmp2;
                return tmp0->next;
                
                
            }
        }
        return tmp0->next;
    }
};
