#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;long long dp[1002][1002][3];long long a[1002][1002];
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    memset(dp,-0x3f,sizeof(dp));//-0x3f设为最小值
    dp[1][1][0]=dp[1][1][1]=dp[1][1][2]=a[1][1];//0表示从左边过来的，1表示从上面来的，2表示从下面来的
    for (int j=1;j<=m;++j){
        for (int i=1;i<=n;++i){//三个方向记录最优解
            dp[i][j][0]=max({dp[i][j-1][0],dp[i][j-1][1],dp[i][j-1][2]})+a[i][j];
        }
        for (int i=2;i<=n;++i){
            dp[i][j][1]=max(dp[i-1][j][0],dp[i-1][j][1])+a[i][j];
        }
        for (int i=n-1;i>=1;--i){
            dp[i][j][2]=max(dp[i+1][j][0],dp[i+1][j][2])+a[i][j];
        }
    }
    cout<<max(dp[n][m][1],dp[n][m][0]);
    return 0;
}//评价是：太妙了！！！