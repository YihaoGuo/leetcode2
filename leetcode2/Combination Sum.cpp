//
//  Combination Sum.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/26.
//  Copyright © 2018年 郭益豪. All rights reserved.
//
#include "Header2.h"
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),  candidates.end());
        int sum=0;
        vector<int> tmp;
        vector<vector<int>>o;
        Sum(candidates, target, 0, tmp, o);
        vector<vector<int>>o2;
        for (int i=0; i<o.size(); i++) {
            vector<int> tmp2=o[i];
            vector<int> tmp3;
            for (int i2=0; i2<tmp2.size(); i2++) {
                
                int i3=tmp2[i2];
                for (int i4=0; i4<i3; i4++) {
                    tmp3.push_back(candidates[i2]);
                }
                
            }
         
            
            o2.push_back(tmp3);
        }
        return o2;
    }
    int Sum(vector<int>& candidates, int target,int n,vector<int>& tmp,vector<vector<int>>& o ){
        if (target==0) {
            o.push_back(tmp);
            return 0;
        }
        if (n==candidates.size()) {
            return 0;
        }
        int number=0;
        while (number*candidates[n]<=target) {
            tmp.push_back(number);
            Sum(candidates, target-number*candidates[n], n+1, tmp, o);
            tmp.pop_back();
            number++;
        }
        return 0;
    }
};
