//# 排队接水
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
int n;double sum;
struct paidui{
    int id,min;
};
bool cmp(paidui a,paidui b){
    if (a.min==b.min){return a.id<b.id;}
    return a.min<b.min;
}
int main(){
    cin>>n;paidui a[n+1];
    for (int i=1;i<=n;++i){
        cin>>a[i].min;a[i].id=i;
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=n;++i){
        cout<<a[i].id<<" ";
    }
    cout<<endl;
    for (int i=1;i<=n;++i){
        sum+=(n-i)*a[i].min;
    }
    printf("%.2lf",sum/n);
    return 0;
}