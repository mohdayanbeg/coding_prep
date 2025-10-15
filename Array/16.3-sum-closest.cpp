/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i=0;
        sort(nums.begin(),nums.end());
        int n= nums.size()-1;
        int res=nums[0]+nums[1]+nums[2];
        while(i<n-1){
            int j=i+1,k=n;
            while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(abs(target-sum)<abs(target-res)) res=sum;
            if(sum>target) k--;
            else if(sum<target) j++;
            else return target;
            }
        i++;
        }
        return res;
        
    }
};
// @lc code=end

