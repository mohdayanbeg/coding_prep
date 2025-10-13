/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
     vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        int i=nums.size()-1;
        int j=0,k=nums.size()-1;
        while(i>=0){
            if(abs(nums[j])>abs(nums[k])){
                res[i]=nums[j]*nums[j];
                j++;;
            }
            else{
                res[i]=nums[k]*nums[k];
                k--;;
            }
            i--;
        }
        return res;
    }
};
// @lc code=end

