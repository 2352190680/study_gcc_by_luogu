#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,t;int dp[201][201];int v[101],w[101];
int main(){
    cin>>n>>m>>t;
    for (int i=1;i<=n;++i){
        cin>>v[i]>>w[i];
    }
    for (int i=1;i<=n;++i){
        for (int j=t;j>=w[i];--j){
            for (int k=m;k>=v[i];--k){
                dp[k][j]=max(dp[k][j],dp[k-v[i]][j-w[i]]+1);
            }
        }
    }
    cout<<dp[m][t];
    return 0;
}