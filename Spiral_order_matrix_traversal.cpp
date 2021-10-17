#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int k=n-1,h=m-1;
    int i,j;
        while(min(h+1,k+1)>(min(n,m)/2)){
        i=n-k-1;
        j=m-h-1;
        for(;j<=h;j++){
            cout<<arr[i][j]<<" ";
        }
        j--;
        for(++i;i<=k;i++){
            cout<<arr[i][j]<<" ";
        }
        i--;
        for(--j;j>=m-h-1;j--){
            cout<<arr[i][j]<<" ";
        }
        j++;
        for(--i;i>=n-k;i--){
            cout<<arr[i][j]<<" ";
        }
        h--;
        k--;
    }
    return 0;
}