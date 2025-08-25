#include <iostream>
#include<cstring>
using namespace std;
int main(){
    // int n;cin>>n;int l[n+1];
    // for (int a=1;a<=n;++a){
    //     int b;cin>>b;l[a]=b;}
    // int x;cin>>x;
    // for (int a=x+1;a<=n;++a){
    //     l[a-1]=l[a];
    // }
    // n--;
    // for (int a=1;a<=n;++a){
    //     cout<<l[a]<<" ";}

    // int a[10],n;cin>>n;memset(a,0,sizeof(a));
    // for (int b=1;b<=n;b++){int x;
    //     cin>>x;a[x]++;}
    // for (int b=0;b<=9;b++){
    //     for (int c=1;c<=a[b];c++)
    //     cout<<b<<" ";
    // }//妙不可言

    // int n,d;cin>>n;int a[n+1];
    // for (int b=1;b<=n;++b){
    //     int y;cin>>y;a[b]=y;}
    // for (int b=1;b<=n;++b){
    //     for (int c=b+1;c<=n;++c){
    //         if (a[b]>a[c]){d=a[b];a[b]=a[c];a[c]=d;}
    //     }
    // }
    // for (int b=1;b<=n;++b){
    //     cout<<a[b]<<" ";}

    int n;cin>>n;long long a[n+1];a[1]=1,a[2]=1;
    for (int b=3;b<=n;++b){
        a[b]=a[b-1]+a[b-2];
    }
    cout<<a[n];
    return 0;
}