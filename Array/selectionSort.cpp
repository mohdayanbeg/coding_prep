#include <bits/stdc++.h>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }


}

void selectionsort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[min]){
                min=j;
            }
        }
                if(min!=i){
                nums[i]=nums[i]^nums[min];
                nums[min]=nums[i]^nums[min];
                nums[i]=nums[i]^nums[min];
                }
    }
    print(nums,n);
}

int main(){
    int arr[]={2,6,1,3,8,4,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    return 0;
}