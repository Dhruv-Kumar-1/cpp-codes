#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int t=arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]>t){
                for(int h=i;h>j;h--){
                    arr[h]=arr[h-1];
                }
                arr[j]=t;
                break;
            }
        }
    }
    return;
}

void insertionsortbydidi(int arr[],int n){
    for(int i=1;i<n;i++){
        int t=arr[i];
        int j=i-1;
        while(arr[j]>t && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionsortbydidi(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}