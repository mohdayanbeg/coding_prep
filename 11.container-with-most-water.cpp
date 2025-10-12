/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max=0;
        while(i<j){
            int area=0;
            if(height[i]>height[j]){
                area = height[j]*(j-i);
                if(area>max){
                    max=area;
                }
                j--;
            }
            else{
                area = height[i]*(j-i);
                if(area>max){
                    max=area;
                }
                i++;
                }
        }
        return max;

    }
};
// @lc code=end

