#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indexes;
        for (int i = 0; i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    indexes.push_back(i);
                    indexes.push_back(j);
                    return indexes;
                }
            }
        
        }
        return indexes;
    }

int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans= twoSum(nums,target);
    for(int i=0;i<2;i++){
        cout<<ans[i];
    }
}
