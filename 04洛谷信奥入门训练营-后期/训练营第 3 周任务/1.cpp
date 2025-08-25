#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int n,m,x,y;cin>>n>>m>>x>>y;
    // char a;cin>>a;
    // if (a=='L'){
    //     if (y==1)cout<<"no";
    //     else cout<<"yes";
    // }
    // else if (a=='R'){
    //     if (y==m)cout<<"no";
    //     else cout<<"yes";
    // }
    // else if (a=='U'){
    //     if (x==1)cout<<"no";
    //     else cout<<"yes";
    // }
    // else if (a=='D'){
    //     if (x==n)cout<<"no";
    //     else cout<<"yes";
    // }

    // int n;cin>>n;int l[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // cout<<0<<endl;
    // for (int i=2;i<=n;++i){
    //     int b=0;
    //     for (int j=i-1;j>=1;--j){
    //         if (l[j]>=l[i]){b=j;break;}
    //     }
    //     cout<<b<<endl;
    // }

    string a;cin>>a;
    int l=a.length();
    for (int i=0;i<=l-1;++i){
        if (tolower(a[i])=='a'||tolower(a[i])=='e'||tolower(a[i])=='i'||tolower(a[i])=='o'||tolower(a[i])=='u')cout<<a[i]<<a[i];
        else cout<<a[i];
    }
    
    return 0;
}