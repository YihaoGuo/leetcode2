//
//  Generate Parentheses.cpp
//  leetcode2
//
//  Created by 郭益豪 on 2018/4/23.
//  Copyright © 2018年 郭益豪. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <iterator>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<int>> save;
        vector<int> p1={1};
        
        save.push_back(p1);
        
        for (int i=2; i<=(n*2); i++) {
            vector<vector<int>> tmp;
            for (int i2=0; i2<save.size(); i2++) {
                
                
                
                vector<int>tmp2=save[i2];
                 vector<int>tmp3=save[i2];
                
                
                
                tmp2.push_back(1);
                tmp3.push_back(-1);
                int sum=0;
                int ok=1;
                for (int i4=0; i4<tmp2.size(); i4++) {
                    sum+=tmp2[i4];
                    if (sum<0) {
                        ok=0;
                    }
                }
                if (ok==1) {
                    tmp.push_back(tmp2);
                }
                
                
                sum=0;
                ok=1;
                for (int i4=0; i4<tmp3.size(); i4++) {
                    sum+=tmp3[i4];
                    if (sum<0) {
                        ok=0;
                    }
                }
                if (ok==1) {
                    tmp.push_back(tmp3);
                }
                
                
                
            }
            
            save=tmp;
        }
        vector<vector<int>> o;
        for (int i3=0; i3<save.size(); i3++) {
            int sum=0;
            int ok=1;
            for (int i4=0; i4<save[i3].size(); i4++) {
                sum+=save[i3][i4];
            }
            if (sum==0) {
                o.push_back(save[i3]);
            }
        }
        vector<string> oo;
        for (int i=0; i<o.size(); i++) {
            string tmp;
            for (int i2=0; i2<o[i].size(); i2++) {
                if (o[i][i2]==1) {
                    tmp.push_back('(');
                    continue;
                }
                if (o[i][i2]==-1) {
                    tmp.push_back(')');
                    continue;
                }
            }
            oo.push_back(tmp);
        }
        return oo;
    }
    
    
};
