//
//  Trapping Rain Water.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/27.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Header2.h"
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> height2=height;
        vector<int> height3=height;
        vector<int> height4=height;
        for (int i=0; i<height2.size(); i++) {
            
            for (int i2=i; i2<height2.size(); i2++) {
                if (height2[i2]<height2[i]) {
                    height2[i2]=height2[i];
                }
            }
        }
        for (int i=0; i<height3.size(); i++) {
            
            for (int i2=i; i2>=0; i2--) {
                if (height3[i2]<height3[i]) {
                    height3[i2]=height3[i];
                }
            }
        }
        
        for (int i=0; i<height3.size(); i++) {
            if (height3[i]<=height2[i]) {
                height4[i]=height3[i];
            }
            if (height3[i]>height2[i]) {
                height4[i]=height2[i];
            }
        }
        int sum=0;
        for (int i=0; i<height3.size(); i++) {
            sum+=height4[i]-height[i];
        }
        return sum;
    }
};
