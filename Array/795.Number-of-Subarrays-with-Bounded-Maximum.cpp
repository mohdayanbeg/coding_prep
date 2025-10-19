#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int s=-1,e=-1,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=left&&nums[i]<=right){
                e=i;
            }
            if(nums[i]>right){
                s=i;e=i;
                continue;
            }
            c+=e-s;
        }
        return c;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,1,4,3};
    int left = 2, right = 3;
    cout << sol.numSubarrayBoundedMax(nums, left, right) << endl;
    return 0;
}