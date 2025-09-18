#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;int a[101];int dp[101][101];
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    dp[0][0]=1;
    for (int i=1;i<=n;++i){//到第几种花
        for (int j=0;j<=m;++j){//到哪个盆子
            for (int k=0;k<=min(j,a[i]);++k){//最多能占用的盆子数
                dp[i][j]=(dp[i][j]+dp[i-1][j-k])%1000007;
            }
        }
    }
    cout<<dp[n][m];
    return 0;
}