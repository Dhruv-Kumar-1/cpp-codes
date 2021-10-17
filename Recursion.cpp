#include <bits/stdc++.h>
using namespace std;

int sum(int n){                          //<-sum of first n natural numbers 
    if(n==0) return 0;
    int prevsum=sum(n-1);
    return n+prevsum;
}

int power(int n,int p){
    if(!p) return 1;
    // int prevpower=power(n,p-1);       //<-n raised to power p
    // return n*prevpower;
    return n*power(n,p-1); //<-OR
}

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

int fibonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int sorttest(int arr[],int n){                     //<-my approach
    if(n==2 && arr[1]>arr[0]) return 1;
    if(arr[n-1]>arr[n-2] && sorttest(arr,n-1)){
        return 1;
    }
    return 0;
}

int sorttest2(int arr[],int i,int n){              //<-didi's approach
    if(i==(n-2) && arr[n]>arr[n-1]) return 1;
    if(arr[i]<arr[i+1] & sorttest2(arr,i+1,n)){
        return 1;
    } 
    return 0;
}

bool sorttest3(int arr[],int n){                   //<-didi's code
    if(n==1) return true;
    return (arr[0]<arr[1] && sorttest3(arr+1,n-1)); 
}

void dec(int n){
    if(n==0) return ;
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    inc(n-1);
    cout<<n<<endl;
} 

int firstocc(int arr[],int n,int i){         
    if(n==1 && arr[0]!=i) return -1;
    if(arr[0]==i) return n;
    return firstocc(arr+1,n-1,i);
}

int lastocc(int arr[],int n,int i,int key){  
    if(i==-1) return -1;
    if(arr[i]==key) return i;
    return lastocc(arr,n,i-1,key);
}

int lastocc2(int arr[],int n,int i,int key){
    int restarray=lastocc(arr,n,i+1,key);
    if(i==n) return -1;
    if(restarray!=-1) return restarray;
    if(arr[i]==key) return i;
    return -1;
}

int main()
{
    // int n,p;                                                    //<-Intro to recursion
    // cin>>n;
    // cout<<"sum = "<<sum(n)<<endl;
    // cout<<"factorial = "<<factorial(n)<<endl;
    // cin>>p;
    // cout<<n<<" raised to "<<p<<" = "<<power(n,p)<<endl;
    // cin>>n;
    // cout<<n<<"th fibonacci number is "<<fibonacci(n);

    // int n;                                                      //<-sorted array check
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<sorttest(arr,n)<<endl<<sorttest2(arr,0,n)<<endl<<sorttest(arr,n);

    // int n;                                                      //<-Print till n in decreasing and increasing order 
    // cin>>n;
    // dec(n);
    // inc(n);

    int n,j;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>j;
    if(firstocc(arr,n,j)!=-1) cout<<n-firstocc(arr,n,j)<<endl;
    else cout<<-1<<endl;
    cout<<lastocc2(arr,n,n-1,j);
    
    return 0;
}