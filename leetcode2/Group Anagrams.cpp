//
//  Group Anagrams.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/30.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Header2.h"
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> o;
        vector<pair<string , string >> save;
        for (int i=0; i<strs.size(); i++) {
            string tmp1=strs[i];
            pair<string, string> tmp2;
            tmp2.second=tmp1;
            sort(tmp1.begin(), tmp1.end());
            tmp2.first=tmp1;
            save.push_back(tmp2);
        }
        map<string, vector<string>> save2;
        for (int i=0; i<strs.size(); i++) {
            save2[save[i].first].push_back(save[i].second);
        }
        for (auto it:save2){
            o.push_back(it.second);
        }
        return o;
    }
};
