#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n][m];
    for(int g=0;g<n;g++){
        for(int h=0;h<m;h++){
            cin>>arr1[g][h];
        }
    }
    int i,j;
    cin>>i>>j;
    int arr2[i][j];
    for(int g=0;g<i;g++){
        for(int h=0;h<j;h++){
            cin>>arr2[g][h];
        }
    }
    int arr3[n];
    int arr4[j];
    int sum=0;
    for(int g=0;g<n;g++){
        for(int h=0;h<m;h++){
            sum+=arr1[g][h];
        }
        arr3[g]=sum;
    }
    for(int g=0;g<j;g++){
        for(int h=0;h<i;h++){
            sum+=arr2[h][g];
        }
        arr4[g]=sum;
    }
    if(i!=m){
        cout<<"Matrix multiplication is undefined.";
        return 0;
    }
    int arr[n][j];
    for(int g=0;g<n;g++){
        for(int h=0;h<j;h++){
            arr[g][h]=arr3[g]*arr4[h];
        }
    }
    for(int g=0;g<n;g++){
        for(int h=0;h<j;h++){
            cout<<arr[g][h]<<" ";
        }
        cout<<endl;
    }

    return 0;
}