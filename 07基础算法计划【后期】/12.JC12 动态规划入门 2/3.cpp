#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,v[26],p[26];int dp[30000];
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        cin>>v[i]>>p[i];
        for (int j=n;j>=v[i];j--){//可以与2比对，j从大到小时可以得到只用一次的效果；而从小到大可以实现多次的效果。
            dp[j]=max(dp[j],dp[j-v[i]]+v[i]*p[i]);
        }
    }
    cout<<dp[n];
    return 0;
}