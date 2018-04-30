//
//  Group Anagrams.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/30.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include "Header2.h"
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> o;
        while (strs.size()>0) {
            string now =strs[0];
            vector<string> tmp1;
            tmp1.push_back(now);
            strs.erase(strs.begin());
            for (int i=0; i<strs.size(); i++) {
                string now2 =now;
                if (strs[i].size()==now2.size()) {
                    string bi =strs[i];
                    int i2=0;
                    for (; i2<now2.size(); i2++) {
                        int ok=0;
                        int i4=0;
                        for (; i4<bi.size(); i4++) {
                            if (now[i2]==bi[i4]) {
                                ok=1;
                                break;
                            }
                        }
                        if (ok==0) {
                            break;
                        }
                        
                        bi.erase(bi.begin()+i4);
                        ok=0;
                        
                    }
                    if (i2==now2.size()) {
                        tmp1.push_back(strs[i]);
                        strs.erase(strs.begin()+i);
                    }
                }
            }
            o.push_back(tmp1);
        }
        return o;
    }
};
