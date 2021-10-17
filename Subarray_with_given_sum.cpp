#include <bits/stdc++.h>
using namespace std;

// int sum(int arr[],int s,int e){
//     int a=0;
//     for(int i=s;i<=e;i++){
//         a+=arr[i];
//     }
//     return a;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int a;
//     cin>>a;
//     int s=0;
//     while(s<n){
//         int e=s;
//         while(sum(arr,s,e)<=a && e<n){
//             if(sum(arr,s,e)==a){
//                 cout<<s+1<<" "<<e+1;
//                 return 0;
//             }
//             e++;
//         }
//         s++;
//     }

//     return 0;
// }



// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int a;
//     cin>>a;
//     int s=0;
//     int e=0;
//     int sum=0;
//     while(e<n && sum+arr[e]<=a){
//         sum+=arr[e];
//         e++;
//     }
//     if(sum==a){
//         cout<<s+1<<" "<<e+1;
//         return 0;
//     }
//     while(e<n){
//         if((sum+arr[e])>a){
//             sum-=arr[s];
//             s++;
//         }
//         if(sum==a){
//             cout<<s+1<<" "<<e+1<<endl;
//             return 0;
//         }
//         sum+=arr[e];
//         if(sum==a){
//             cout<<s+1<<" "<<e+1<<endl;
//         }
//         e++;
//     }

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
    int a;
    cin>>a;
    int i=0,j=0,st=0,en=0,sum=0;
    while(j<n && sum+arr[j]<=a){
        sum+=arr[j];
        j++;
    }
    if(sum==a){
        cout<<i+1<<" "<<j+1;
    }
    while(j<n){
        sum+=arr[j];
        while(sum>a){
            sum-=arr[i];
            i++;
        }
        if(sum==a){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;

    return 0;
}