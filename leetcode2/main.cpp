//
//  main.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/23.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include "Maximum Subarray.cpp"
int main(int argc, const char * argv[]) {
    // insert code here...
//    ListNode*tmp1=new ListNode(1);
//    ListNode*tmp2=new ListNode(2);
//    ListNode*tmp3=new ListNode(3);
//    ListNode*tmp4=new ListNode(4);
//    ListNode*tmp5=new ListNode(5);
//    tmp1->next=tmp2;
//    tmp2->next=tmp3;
//    vector<ListNode *> lists={tmp1,tmp4,tmp5};
    
   // vector<int> tmp={0,1,0,2,1,0,1,3,2,1,2,1};
    string tmp="";
    vector<int> strs={-2,1,-3,4,-1,2,1,-5,4};
    
    Solution().maxSubArray(strs);
   
    return 0;
}
