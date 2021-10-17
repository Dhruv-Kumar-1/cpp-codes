#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if ((int)str[i]<(int)str[j]){
                char s=str[i];
                str[i]=str[j];
                str[j]=s;
            }
        }
    }
    
cout<<str<<endl;
cin>>str;
sort(str.begin(),str.end());
cout<<str;

    return 0;
}