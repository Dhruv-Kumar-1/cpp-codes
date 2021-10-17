#include <bits/stdc++.h>
using namespace std;

// int main()              //<-Brute force approach
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }

//     return 0;
// }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Input the array in ascending order"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Sum to search = ";
    cin>>k;
    int low=0;
    int high=n-1;
    while(low<high){
        int t=arr[low]+arr[high];
        if(t<k) low++;
        else if(t>k) high--;
        else{
            cout<<low+1<<" "<<high+1;
            return 0;
        }
    }
    if(low==high) cout<<"No results found!";

    return 0;
}