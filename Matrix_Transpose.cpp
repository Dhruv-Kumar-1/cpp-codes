#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows(or columns) : ";
    cin>>n;
    cout<<"Enter the elements."<<endl;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matrix Transpose"<<endl;
    for(int i=1;i<n;i++){
        for(int j=0;j<=i-1;j++){
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}