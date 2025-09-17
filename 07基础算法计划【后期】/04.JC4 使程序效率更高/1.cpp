#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int t,m;int w[102],v[102];int dp[102][1001];
int main(){
    cin>>t>>m;
    for (int i=1;i<=m;++i){
        cin>>w[i]>>v[i];
    }
    for (int i=1;i<=m;++i){
        for (int j=t;j>=0;--j){
            if (j>=w[i]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);//后面的意思是上层那个留足w[i]的大小后再加上本组的v[i]后与不留的对比，比较那种更值得
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[m][t];
    return 0;
}