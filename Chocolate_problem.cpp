#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int chocolates=n;
    int wrappers=n;
    while(wrappers>=3){
        int t=wrappers/3;
        chocolates+=t;
        wrappers=wrappers%3+t;
    }
    cout<<chocolates<<" "<<wrappers;

    return 0;
}