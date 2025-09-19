#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
const long long maxn=1e8;
int v,n;int a[32];long long dp[maxn];long long sum;//用sum减少上限
int main(){
    cin>>v>>n;
    for (int i=1;i<=n;++i){cin>>a[i];sum+=a[i];}
    dp[0]=1;
    for (int i=1;i<=n;++i){
        for (int j=sum;j>=0;--j){//必须反过来写，会更新加后的dp，导致一个数反复加
            if (dp[j]==1)dp[j+a[i]]=1;
        }
    }
    for (int i=v;i>=1;--i){
        if (dp[i]==1){
            cout<<v-i;break;
        }
    }
    return 0;
}