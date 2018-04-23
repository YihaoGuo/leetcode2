//
//  Valid Parentheses.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/23.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include <string>
#include<vector>"
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<int> t;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='{') {
                t.push_back(1);
            }
            if (s[i]=='}') {
                if (t.size()==0||t.back()!=1) {
                    return false;
                }
                t.pop_back();
                
            }
            if (s[i]=='(') {
                t.push_back(2);
            }
            if (s[i]==')') {
                if (t.size()==0||t.back()!=2) {
                    return false;
                }
                t.pop_back();
            }
            if (s[i]=='[') {
                t.push_back(3);
            }
            if (s[i]==']') {
                if (t.size()==0||t.back()!=3) {
                    return false;
                }
                t.pop_back();
            }
        }
        if (t.size()==0) {
            return true;
        }
        return false;
    }
};
