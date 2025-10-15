
#import <bits/stdc++.h>
#import <vector>
using namespace std;
class Solution {
    public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int> res;
        if(arr.size()<k || k<=0 || arr.size()==0) return {};
        for(int i =0;i<=arr.size()-k;i++){
            int c=0;
            for(int j=i;j<i+k;j++){
                if(arr[j]<0){
                    res.push_back(arr[j]);
                    c++;
                    break;
                }
            }
            if(c==0) res.push_back(0);
        }
        return res;
    }
};