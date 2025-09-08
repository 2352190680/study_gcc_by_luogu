//[COCI2011-2012#4] KEKS
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int n,k;string a;int l[500001];int f;
int main(){
    cin>>n>>k;
    cin>>a;int b=k;
    for (int i=0;i<n;++i){
        int t=a[i]-'0';
        while(k!=0&&f!=0&&l[f]<t)k--,l[f]=0,f--;
        f++;l[f]=t;
    }
    for (int i=1;i<=n-b;++i){
        cout<<l[i];
    }
    return 0;
}