//
//  Longest Valid Parentheses.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/24.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include "Header2.h"
class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> save;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='(') {
                save.push_back(1);
                continue;
            }
            if (s[i]==')') {
                save.push_back(-1);
                continue;
            }
        }
        int now=0;
        for (int i=0;i<s.size(); i++) {
            int sum=0;

            for (int i1=i; i1<s.size(); i1++) {
                sum+=save[i1];
                if (sum<0) {
                    break;
                }
                if (sum==0&&i1-i+1>now) {
                    now=i1-i+1;
                }
                
            }
        }
        return now;
    }
};
