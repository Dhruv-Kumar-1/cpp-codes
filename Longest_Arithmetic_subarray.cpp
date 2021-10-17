#include <bits/stdc++.h>
using namespace std;

// int diff(int arr[],int i,int j){
//     int t=arr[i+1]-arr[i];
//     for(int k=i+1;k<=j;k++){
//         if((arr[k]-arr[k-1])==t) continue;
//         return 0;
//     }
//     return 1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int arr2[n];
//     int h=2;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(diff(arr,i,j)==1){
//                 if((j-i+1)>h){
//                     h=j-i+1;
//                     // for(int o=0;o<h;o++){
//                     //     arr2[o]=arr[i+o];
//                     // }    
//                 }  
//             }
//         }
//     }
//     // for(int i=0;i<h;i++){
//     //     cout<<arr2[i]<<" ";
//     // }
//     // cout<<endl<<h;
//     cout<<h;

//     return 0;
// }

//BHAIYA JI KA CODE!!!!
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int diff=arr[1]-arr[0];
    int curr=2;
    int ans=2;
    int j=2;
    while(j<n){
        if(arr[j]-arr[j-1]==diff){
            curr++;
            // if(ans<curr) ans=curr; //<-mine
        }
        else{
            diff=arr[j]-arr[j-1];
            curr=2;
        }
        // ans=max(ans,curr); //<-bhaiya
        j++;
    }

    cout<<ans;

    return 0;
}