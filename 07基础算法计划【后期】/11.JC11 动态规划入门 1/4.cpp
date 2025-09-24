#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int a[1001][1001];long long dp[1001][1001];
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=i;++j){
            cin>>a[i][j];
        }
    }
    dp[1][1]=a[1][1];
    for (int i=2;i<=n;++i){
        for (int j=1;j<=i;++j){
            dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
        }
    }
    long long m=0;
    for (int i=1;i<=n;++i){
        m=max(m,dp[n][i]);
    }
    cout<<m;
    return 0;
}