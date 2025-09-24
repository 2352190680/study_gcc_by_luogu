#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;long long a[100001];long long sum=-1e9;
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        a[i]=max(a[i],a[i]+a[i-1]);//NB,来决定加不加入当前数，后者为加入后与前面最大连续的和，有利便加入
        sum=max(a[i],sum);
    }
    cout<<sum;
    return 0;
}