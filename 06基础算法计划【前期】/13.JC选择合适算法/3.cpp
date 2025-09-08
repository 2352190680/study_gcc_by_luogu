//# 凌乱的yyy / 线段覆盖
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
int n;int sum=1;
struct test{
    int begin,over;
};
bool cmp(test a,test b){
    return a.over<b.over;
}
int main(){
    cin>>n;test a[n+1];
    for (int i=1;i<=n;++i){
        cin>>a[i].begin>>a[i].over;
    }
    sort(a+1,a+n+1,cmp);
    int last=a[1].over;
    for (int i=2;i<=n;++i){
        if (a[i].begin>=last){
            sum++;
            last=a[i].over;
        }
    }
    cout<<sum;
    return 0;
}