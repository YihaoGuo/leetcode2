//
//  4 sum.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/23.
//  Copyright © 2018年 郭益豪. All rights reserved.
#include "Header.h"
#include <vector>
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        std::vector<ListNode*> tmp;
        ListNode* tmp2=head;
        while (tmp2!=nullptr) {
            tmp.push_back(tmp2);
            tmp2=tmp2->next;
        }
        int ss=tmp.size();
        ss-=n;
        int nn=tmp.size();
        tmp2=tmp[ss];
        if (ss==0) {
            if (nn==1) {
                return nullptr;
            }
            return tmp[1];
        }
        if (ss==nn-1) {
            if (nn>1) {
                tmp[ss-1]->next=nullptr;
                return head;
            }
            
        }
        tmp[ss-1]->next=tmp[ss]->next;
        return head;
    }
};
