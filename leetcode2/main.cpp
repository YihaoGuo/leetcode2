//
//  main.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/23.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include "Remove Nth Node From End of List.cpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    ListNode *p1=new ListNode(1);
    ListNode *p2=new ListNode(2);
    ListNode *p3=new ListNode(3);
    p1->next=p2;
    p2->next=p3;
    Solution().removeNthFromEnd(p1, 2);
    return 0;
}
