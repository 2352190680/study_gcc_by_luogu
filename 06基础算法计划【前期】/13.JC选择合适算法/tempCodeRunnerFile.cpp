//# 凌乱的yyy / 线段覆盖
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
int n;
struct test{
    int begin,over;
};
bool cmp(test a,test b){
    if (a.begin==b.begin)return a.over<b.over;
    else{
        return a.begin<b.begin;
    }
}
int main(){
    cin>>n;test a[n+1];
    for (int i=1;i<=n;++i){
        cin>>a[i].begin>>a[i].over;
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=n;++i){
        if (a[i].over<=a[n].begin){
            cout<<2;return 0;
        }
    }
    cout<<1;
    return 0;
}