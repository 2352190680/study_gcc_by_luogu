#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;long long dp[1001][1001];long long a[1001][1001];
void dfs(int x,int y){
    if (x==1&&y!=m)dp[x][y]=max(dp[x][y-1]+a[x][y],dp[x+1][y-1]+a[x+1][y]+a[x][y]);
    else if(x==1&&y==m)dp[x][y]=dp[x][y-1]+a[x][y];
    else if (x<n&&y!=m){
        dp[x][y]=max(dp[x][y-1]+a[x][y],dp[x-1][y]+a[x][y]);
        dp[x][y]=max(dp[x][y],dp[x+1][y-1]+a[x+1][y]+a[x][y]);
    }
    else if (x<n&&y==m){
        dp[x][y]=max(dp[x][y-1]+a[x][y],dp[x-1][y]+a[x][y]);
    }
    else if (x==n){
        dp[x][y]=max(dp[x][y-1]+a[x][y],dp[x-1][y]+a[x][y]);
    }  
    if (x+1!=n)dfs(x+1,y);
    if (x==n)dfs(1,y+1);
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    dp[n][m]=a[n][m];
    for (int i=2;i<=n;++i){
        dp[i][1]=dp[i-1][1]+a[i][1];
    }
    dfs(1,2);
    cout<<dp[1][2];
    return 0;
}