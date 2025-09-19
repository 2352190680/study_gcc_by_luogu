#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;long long a[1000001],b[1000001];
bool cmp(long long x,long long y){
    return x>y;
}
void chazhao(long long x){
    int left=1,right=n,res=-1;
    while (left<=right){
        int mid=(left+right)/2;
        if (a[mid]>x){
            left=mid+1;
        }
        else if (a[mid]<x){
            right=mid-1;
        }
        else if (a[mid]==x){
            res=mid;right=mid-1;
        }
    }
    cout<<res<<endl;
}
int main(){
    cin>>n>>m;
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=m;++i){
        cin>>b[i];
        chazhao(b[i]);
    }
    return 0;
}