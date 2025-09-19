#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;long long a[1000001];long long b[100001];
void chazhao(long long x){
    int begin=1,end=n;
    while (begin<end){
        int mid=(begin+end)/2;
        if (a[mid]<x){
            begin=mid+1;
        }
        else if (a[mid]>=x){
            end=mid;
        }
    }
    if (a[begin]==x)cout<<begin<<" ";
    else cout<<-1<<" ";
    return;
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i)cin>>a[i];
    for (int i=1;i<=m;++i)cin>>b[i];
    for (int i=1;i<=m;++i){
        chazhao(b[i]);
    }
    return 0;
}