#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;long long b[100001];int k=1;
struct peo{
    int num;long long id;
};peo a[100001];peo c[100001];
bool cmp(peo a,peo b){
    return a.id<b.id;
}
bool cmpp(peo a,peo b){
    return a.num<b.num;
}
void chazhao(int begin,long long x){
    int l=begin,r=n;
    while (l<=r){
        int mid=(l+r)/2;
        if (a[mid].id>x){
            r=mid-1;
        }
        else if (a[mid].id<x){
            l=mid+1;
        }
        else if (a[mid].id==x){
            c[k].id=a[mid].id;c[k].num=a[mid].num;k++;return;
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){cin>>a[i].id;a[i].num=i;}
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=m;++i){
        cin>>b[i];
        chazhao(1,b[i]);
    }
    sort(c+1,c+k,cmpp);
    for (int i=1;i<=k-1;++i){
        cout<<c[i].id<<" ";
    }
    return 0;
}