#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long t,m,dp[10000001],a[10001],w[10001];
int main(){
    cin>>t>>m;
    for (int i=1;i<=m;++i){
        cin>>a[i]>>w[i];
    }
    for (int i=1;i<=m;++i){
        for (int j=a[i];j<=t;++j){
            dp[j]=max(dp[j],dp[j-a[i]]+w[i]);
        }
    }
    cout<<dp[t];
    return 0;
}