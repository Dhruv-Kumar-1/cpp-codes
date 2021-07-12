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

    int maxtill=arr[0];
    cout<<maxtill<<" ";
    for(int i=1;i<n;i++){
        if(arr[i]>maxtill){
            maxtill=arr[i];
        }
        cout<<maxtill<<" ";
    }

    return 0;
}