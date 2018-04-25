//
//  Search in Rotated Sorted Array.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/24.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include "Header2.h"
class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        if (nums.size()==0) {
            return -1;
        }
        if (nums.size()==1) {
            if (nums[0]==target) {
                return 0;
            }
            return -1;
        }
        if (nums.size()==2) {
            if (nums[0]==target) {
                return 0;
            }
            if (nums[1]==target) {
                return 1;
            }
            return -1;
        }
        if (nums.size()==3) {
            if (nums[0]==target) {
                return 0;
            }
            if (nums[1]==target) {
                return 1;
            }
            if (nums[2]==target) {
                return 2;
            }
            return -1;
        }
         int now=nums.size()/2;
        if (nums[now]==target) {
            return now;
        }
        
        vector<int>tmp1;
        tmp1.insert(tmp1.begin(), nums.begin(),nums.begin()+now);
        vector<int>tmp2;
        tmp2.insert(tmp2.begin(), nums.begin()+now+1,nums.end());
        int s1=search(tmp1, target);
        
        if (s1!=-1) {
            return s1;
        }
        int s2=search(tmp2, target);
        if (s2!=-1) {
            return s2+now+1;
        }
        return -1;
        
        

    }
    
};
