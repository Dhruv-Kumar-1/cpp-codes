#include <bits/stdc++.h>
using namespace std;

// int main()                         //<- only for wrapped sum(no comparison done)
// {
//     ios_base::sync_with_stdio(0);     
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int n;
//     cin>>n;
//     int arr[2*n-1];
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//         arr[i+n]=arr[i];
//     }
//     cin>>arr[n-1];

//     int current=0;
//     int j=0;
//     int mx=INT_MIN; 
//     while(j<2*n-1){
//         current+=arr[j];
//         if(current<0){
//             current=0;
//         }
//         mx=max(mx,current);
//         j++;
//     }
//     cout<<endl<<mx;

//     return 0;
// }

// didi ka solution
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=-arr[i];
    }
    int current=0;
    int j=0;
    int mx=INT_MIN;
    while(j<n){
        current+=arr1[j];
        if(current<0){
            current=0;
        }
        mx=max(mx,current);
        j++;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sum=sum+mx;
    int current1=0;
    int j1=0;
    int mx1=INT_MIN;
    while(j1<n){
        current1+=arr[j1];
        if(current1<0){
            current1=0;
        }
        mx1=max(mx1,current1);
        j1++;
    }
    if(mx1>sum){
        cout<<mx1;
    }
    else{
        cout<<sum;
    }

    return 0;
}