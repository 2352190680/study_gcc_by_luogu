#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;int a[101];int dp[100001];int sum;
int main(){
    cin>>n>>m;dp[0]=1;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        sum+=a[i];
    }
    for (int i=1;i<=n;++i){
        for (int j=sum;j>=0;--j){
            if (dp[j]!=0){
                dp[j+a[i]]+=dp[j];
            }
        }
    }
    cout<<dp[m];
    return 0;
}