#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=(1e3)+1;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            idx[arr[i]]=1;
        }
    }
    for(int i=1;i<N;i++){
        if(idx[i]==-1){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}