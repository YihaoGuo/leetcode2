//
//  Merge k Sorted Lists.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/24.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include "Header.h"
using namespace std;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode*> save;
        
        for (int i=0; i<lists.size(); i++) {
            ListNode *tmp=new ListNode(-1);
            save.push_back(tmp);
            save[i]=lists[i];
        }
        
        ListNode* tmpp=new ListNode(-1);
        ListNode* o=tmpp;
        while (1) {
            int ok=0;
            for (int i=0; i<save.size(); i++) {
                if (save[i]!=nullptr) {
                    ok=1;
                }
            }
            if (ok==0) {
                break;
            }
            int smalln=-1;
            int va=INT_MAX;
            ;
            for (int i=0; i<save.size(); i++) {
                if (save[i]!=nullptr) {
                    if (save[i]->val<=va) {
                        va=save[i]->val;
                        smalln=i;
                    }
                }
            }
            tmpp->next=save[smalln];
            tmpp=save[smalln];
            save[smalln]=save[smalln]->next;
            
            
        }
        return o->next;
    }
};
