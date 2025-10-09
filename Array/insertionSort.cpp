#include <bits/stdc++.h>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }
}

void insertionsort(int nums[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int z=nums[i];
        while(j>=0 && z<nums[j]){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=z;

    }
    print(nums,n);
}

int main(){
    int arr[]={2,6,1,3,8,4,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    return 0;
}