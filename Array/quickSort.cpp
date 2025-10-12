#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    cout<<'[';
    for(int i=0;i<n;i++){
        if(i!=n-1)
        cout<<arr[i]<<",";
        else cout<<arr[i];
    }
    cout<<']';
}

void quickSort(int arr[], int s, int e)
{
    if(s<e){
        int pivot=e;
        int i=s-1;
        int j=s;
        while(j<pivot){
            if(arr[j]<arr[pivot]){
                ++i;
                swap(arr[i],arr[j]);
            }
            j++;
        }
        ++i;
        swap(arr[i],arr[pivot]);
        quickSort(arr,s,i-1);
        quickSort(arr,i+1,e);
    }
}

int main()
{
    int arr[] = {7, 3, 2, 6, 8, 5, 9, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);


    print(arr,n);
}