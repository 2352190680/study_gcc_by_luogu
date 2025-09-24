#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int m,n;int a[2001][2001];long long dp[2001][2001];long long sum=1e9;
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        for (int j=1;j<=n;++j){
            cin>>a[i][j];
            if (j==1){
                dp[i][j]=a[i][j];
            }
        }
    }
    for (int i=2;i<=n-1;++i){
        dp[1][i]=min(dp[1][i-1],dp[m][i-1])+a[1][i];
        for (int j=2;j<=m;++j){
            dp[j][i]=min(dp[j][i-1],dp[j-1][i-1])+a[j][i];
        }
    }
    dp[1][n]=min(dp[1][n-1],dp[m][n-1])+a[1][n];
    sum=min(sum,dp[1][n]);
    for (int i=2;i<=m;++i){
        dp[i][n]=min(dp[i][n-1],dp[i-1][n-1])+a[i][n];
        sum=min(sum,dp[i][n]);
    }
    cout<<sum;
    return 0;
}