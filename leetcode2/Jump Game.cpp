//
//  Jump Game.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/5/2.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include "Header2.h"
class Solution {
public:
    bool canJump(vector<int>& nums) {
        return Jump(nums, 0);
    }
    bool Jump(vector<int>& nums,int now) {
        if (now==nums.size()-1) {
            return true;
        }
        int save=nums[now];
        if (save+now>=(nums.size()-1)) {
            return true;
        }
        int ok=0;
        for (int i=1; i<=save; i++) {
            bool tmp2=Jump(nums, i+now);
            if (tmp2==true) {
                ok=1;
                break;
            }
        }
        if (ok==1) {
            return true;
        }
        return false;
    }
};
