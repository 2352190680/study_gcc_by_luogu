#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int dp[1000001];
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        dp[i]=dp[i-1]+1;
        if (i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
    }
    cout<<dp[n]-1;
    return 0;
}