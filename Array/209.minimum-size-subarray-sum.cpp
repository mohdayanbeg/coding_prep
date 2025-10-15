/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> length;
        for(int i=0;i<nums.size();i++){
            int sum=0,c=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum>=target){
                    c=j-i+1;
                    length.push_back(c);
                    break;
                }
            }
        }
        sort(length.begin(),length.end());
        if(length.size()==0) return 0;
        return length[0];
    }
};
// @lc code=end

