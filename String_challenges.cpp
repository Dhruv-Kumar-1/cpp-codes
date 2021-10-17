#include <bits/stdc++.h>
using namespace std;

//65-90:uppercase
//97-122:lowercase

int main()
{
    string s;
    cin>>s;
    // for(int i=0;i<s.size();i++){                                       //<-making string uppercase
    //     if((int)s[i]>=97 && (int)s[i]<=122 // if(s[i]<='a' && s[i]>='z')){
    //         s[i]=s[i]-32;
    //     }
    // }
    // cout<<"All uppercase : "<<s;

    // for(int i=0;i<s.size();i++){                                        //<-making string lowercase
    //     if((int)s[i]>=65 && (int)s[i]<=90 // s[i]>='A' && s[i]<='Z'){
    //         s[i]=s[i]+32;
    //     }
    // }
    // cout<<"All lowercase : "<<s;

    // transform(s.begin(),s.end(),s.begin(),::toupper);                   //<-function to make upper and lower case 
    // cout<<s<<endl;
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    // cout<<s<<endl;

    // for(int i=0;i<s.size();i++){                                        //<-sorting the integer string
    //     for(int j=0;j<i;j++){
    //         if(s[j]<s[i]){
    //             char c=s[i];
    //             s[i]=s[j];
    //             s[j]=c;
    //         }
    //     }
    // }    
    // cout<<s;

    // sort(s.begin(),s.end(),greater<int>());                             //<-function to sort integer string
    // cout<<s<<endl;

    // int arr[26];                                                        //<-finds character that ocuured maximum times 
    // for(int i=0;i<26;i++){
    //     arr[i]=0;
    // }
    // for(int i=0;i<s.size();i++){
    //     arr[s[i]-'a']++;
    // }
    // sort(s.begin(),s.end(),greater<int>());                             
    // cout<<s<<endl;
    // int mx=0;
    // char ans='a';
    // for(int i=0;i<26;i++){
    //     if(mx<arr[i]){
    //         mx=arr[i];
    //         ans=i+'a';
    //     }
    // }
    // cout<<mx<<" "<<ans;

    return 0;
}