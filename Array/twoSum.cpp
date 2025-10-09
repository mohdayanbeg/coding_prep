#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
//O(n^2)
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
//O(nlogn)
vector<int> twoSum2(vector<int>& nums, int target) {
        vector<pair<int,int>> vipair;
        for(int i=0;i<nums.size();i++){
            vipair.push_back({nums[i],i});
            }
        sort(vipair.begin(),vipair.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(vipair[i].first+vipair[j].first==target){
            return {vipair[i].second,vipair[j].second};
        }
        else if(vipair[i].first+vipair[j].first<target) i++;
        else if(vipair[i].first+vipair[j].first>target) j--;
        
        }
        return {};
    }

int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans1= twoSum(nums,target);
    for(int i=0;i<2;i++){
        cout<<ans1[i];
    }
    vector<int> ans2= twoSum2(nums,target);
    for(int i=0;i<2;i++){
        cout<<ans2[i];
    }
}
