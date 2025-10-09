#include <bits/stdc++.h>
using namespace std;
void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }


}
void bubblesort(int nums[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                nums[j]=nums[j]^nums[j+1];
                nums[j+1]=nums[j]^nums[j+1];
                nums[j]=nums[j]^nums[j+1];
            }
        }
    }
    print(nums,n);

}

int main(){
    int arr[]={2,6,1,3,8,4,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    return 0;
}