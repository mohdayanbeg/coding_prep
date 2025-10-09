#include <bits/stdc++.h>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }
}

void merge(int arr[],int s,int mid,int e){
    int n1=mid-s+1;
    int n2=e-mid;
    int leftarr[n1];
    int rightarr[n2];
    for(int i =0;i<n1;i++){
        leftarr[i]=arr[s+i];
    }
    for(int i =0;i<n2;i++){
        rightarr[i]=arr[mid+1+i];
    }
    int i = 0, j = 0, k = s;
    while(i<n1&&j<n2){
        if(leftarr[i]<rightarr[j]) arr[k++]=leftarr[i++];
        else arr[k++]=rightarr[j++];
    }
    while(i<n1) arr[k++]=leftarr[i++];
    while(j<n2) arr[k++]=rightarr[j++];
}

void mergesort(int arr[],int s,int e){
    if(s<e){
        int mid = s +((e-s)/2);
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }

}

int main(){
    int arr[]={2,6,1,3,8,4,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    print(arr,n);
    return 0;
}

