#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int counter(vector<int>& nums,int goal){
        if(goal<0) return 0;
        long long count=0;
        int j=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>goal){
                sum-=nums[j++];
            }
            if(sum<=goal) count+=i-j+1;
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return counter(nums,goal)-counter(nums,goal-1);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    cout << sol.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}