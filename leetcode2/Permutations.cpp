//
//  Permutations.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/29.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include"Header2.h"
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> p;
        vector<int> tmp1;
        vector<int> tmp2=nums;
        permute2(tmp1, tmp2, p);
        return p;
    }
    void permute2(vector<int> n,vector<int> m,vector<vector<int>> &p){
        if (m.size()==0) {
            p.push_back(n);
            return;
        }
        for (int i=0; i<m.size(); i++) {
            vector<int> tmp1=n;
            vector<int> tmp2=m;
            tmp1.push_back(m[i]);
            tmp2.erase(tmp2.begin()+i);
            permute2(tmp1, tmp2,p);
            
        }
        return;
    }
};
