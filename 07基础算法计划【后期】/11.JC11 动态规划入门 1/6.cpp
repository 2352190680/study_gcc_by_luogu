#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int a[5001],dp[5001],sum;
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];dp[i]=1;
        for (int j=1;j<i;++j){
            if (a[i]>a[j]){
                dp[i]=max(max(1,dp[j])+1,dp[i]);
            }
        }
        sum=max(sum,dp[i]);
    }
    cout<<sum;
    return 0;
}