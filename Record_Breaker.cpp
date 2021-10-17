#include <bits/stdc++.h>
using namespace std;


// int checkprev(int arr[],int i){
//     for(int j=0;j<i;j++){
//         if(arr[j]>arr[i]) return 0;
//     }
//     return 1;
// }
// int checknext(int arr[],int i){
//     if(arr[i+1]>arr[i]) return 0;
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

//     if(n==2){
//         if(arr[0]<arr[1]){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }

//     int record=0;
//     if(arr[0]>arr[1]) record++;
//     int i;
//     for(i=1;i<n-1;i++){
//         if((checkprev(arr,i)==1) && (checknext(arr,i)==1)){
//             cout<<arr[i]<<" ";
//             record++;
//         }
//     }
//     if(checkprev(arr,i)==1) record++;

//     cout<<endl<<record;

//     return 0;
// }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    if(n==2){
        if(arr[0]==arr[1]) cout<<"0"<<endl;
        else cout<<"1"<<endl;
        return 0;
    }

    int ans=0,i;
    int mx=arr[0];
    for(i=1;i<n-1;i++){
        mx=max(arr[i],mx);
        if((mx==arr[i]) && (arr[i]>arr[i+1])) ans++;
    }
    mx=max(arr[i],mx);
    if(mx==arr[i]) ans++;

    cout<<ans;

    return 0;
}