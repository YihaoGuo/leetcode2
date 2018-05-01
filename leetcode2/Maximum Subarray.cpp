//
//  Maximum Subarray.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/5/1.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include "Header2.h"
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
        int big=nums[0];
        for(auto it:nums){
            sum+=it;
            if (sum>big) {
                big=sum;
            }
            if (sum>=0) {
                
                continue;
            }
            if (sum<0) {
                sum=0;
            }
        }
        return sum;
    }
};
