//
//  Rotate Image.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/29.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include "Header2.h"
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> tmp;
        for (int i=0; i<matrix.size(); i++) {
            vector<int> tmp2;
            tmp.push_back(tmp2);
        }
        for (int i=matrix.size()-1; i>=0; i--) {
            int now=0;
            for (int i2=0; i2<matrix.size(); i2++) {
                tmp[i2].push_back(matrix[i][i2]);
            }
        }
        matrix=tmp;
    }
};
