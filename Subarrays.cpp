#include <bits/stdc++.h>
using namespace std;

int sum(int arr[],int i,int j){
    int sum=0;
    for(int k=i;k<=j;k++){
        sum+=arr[k];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<sum(arr,i,j)<<" ";
        }  
    }

    return 0;
}