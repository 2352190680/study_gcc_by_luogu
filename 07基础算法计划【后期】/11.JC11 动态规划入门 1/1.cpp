#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int dp[1000001];
int main(){
    cin>>n;
    dp[1]=1;
    for (int i=2;i<=n;++i){
        if (i>1){
            dp[i]=dp[i-1]+1;
        }
        if (i>=5){
            dp[i]=min(dp[i],dp[i-5]+1);
        }
        if (i>=11){
            dp[i]=min(dp[i],dp[i-11]+1);
        }
    }
    cout<<dp[n];
    return 0;
}