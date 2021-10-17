#include <bits/stdc++.h>
using namespace std;

int main()
{
    //SIEVE OF ERATOSTHENES

    // int n;
    // cin>>n;
    // int arr[n+1]={0}; //<-All elements initialized to zero

    // int i=2;
    // while(i*i<=n+1){
    //     int j=0;
    //     while(i*(j+i)<=n){
    //         arr[i*(j+i)]=1;
    //         j++;
    //     }
    //     i++;
    // }
    // for(i=2;i<n+1;i++){
    //     if(!arr[i]) cout<<i<<" ";
    // }

    // for(int i=2;i<=n;i++){
    //     if(arr[i]==0){
    //         for(int j=i*i;j<=n;j+=i){
    //             arr[j]=1;
    //         }
    //     }
    // }
    // for(int j=2;j<=n;j++){
    //     if(arr[j]==0){
    //         cout<<j<<" ";
    //     }
    // }

    //PRIME FACTORISATION USING SIEVE

    int n;
    cin>>n;
    int arr[n+1]={0};
    for(int i=2;i<n;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                if(!arr[j]){
                    arr[j]=i;
                }
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(!arr[i]) arr[i]=i;
    }
    while(n!=1){
        cout<<arr[n]<<" ";
        n/=arr[n];
    }

    return 0;
}