#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;int a[100001],b[100001];long long sum;int last=1;
void chazhao(int begin,int x){
    int l=begin,r=n;
    while (l+1<r){
        int mid=(l+r)/2;
        if (a[mid]>x){
            r=mid;
        }
        else if (a[mid]<x){
            l=mid;
        }
        else if (a[mid]==x){
            return;
        }
    }
    int i=abs(a[l]-x);
    int j=abs(a[r]-x);
    if (i>=j){
        sum+=j;
        last=r;
    }
    else {
        sum+=i;
        last=l;
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i)cin>>a[i];
    for (int i=1;i<=m;++i)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    for (int i=1;i<=m;++i){
        chazhao(last,b[i]);
    }
    cout<<sum;
    return 0;
}