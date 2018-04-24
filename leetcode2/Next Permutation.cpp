//
//  Next Permutation.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/24.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
# include "Header2.h"
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size()==0||nums.size()==1) {
            return ;
        }
        int ii=-1;
        for (int i=nums.size()-1; i>=1; i--) {
            if (nums[i]>nums[i-1]) {
                ii=i;
                break;
            }
        }
        vector<int>tmp;
        if (ii==-1) {
            for (int i=nums.size()-1; i>=0; i--) {
                tmp.push_back(nums[i]);
            }
            nums=tmp;
            return;
        }
        
        tmp.insert(tmp.begin(),nums.begin(), nums.begin()+ii-1);
        
        int change=ii-1;
        int now=INT_MAX;
        int w=-1;
        for (int i=ii; i<nums.size(); i++) {
            if (nums[i]>nums[change]&&nums[i]<=now) {
                w=i;
                now=nums[i];
            }
        }
        tmp.push_back(now);
        for (int i=nums.size()-1; i>w; i--) {
            tmp.push_back(nums[i]);
        }
        tmp.push_back(nums[change]);
        for (int i=w-1; i>change; i--) {
            tmp.push_back(nums[i]);
        }
        
        
        nums=tmp;
        return ;
        
        //2 3 1 33
        
        //2 3 3
        
    }
};
