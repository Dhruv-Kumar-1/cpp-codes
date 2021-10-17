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
    int key;                       
    cin>>key;
    // for(int i=0;i<n;i++){                      //<-Brute force approach
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]==key){
    //             cout<<"True";
    //             return 0;
    //         }
    //     }
    // }
    // cout<<"False";
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(arr[i][j]==key){
            cout<<"True";
            return 0;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"False";

    return 0;
}