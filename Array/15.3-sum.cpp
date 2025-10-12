/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        while(i<n-2){
            if(i>0&&nums[i]==nums[i-1]){++i; continue;}
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0) j++;
                else {
                    res.push_back({nums[i],nums[j],nums[k]});
                    while(j<k&&nums[j]==nums[j+1]) j++; 
                    while(j<k&&nums[k]==nums[k-1]) k--; 
                    j++;
                    k--;
                }
            }
            i++;

        }

        return res;
    }
};
// @lc code=end

