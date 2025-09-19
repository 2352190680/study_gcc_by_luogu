//P1064 [NOIP 2006 提高组] 金明的预算方案
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n, m;
long long q[61], w[61], v[61];long long fu[61][3];
long long dp[32001];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int a, b;
        cin >> a >> b;
        q[i] = a;
        w[i] = a * b;
        cin >> v[i];
        if (v[i]!=0){
            if (fu[v[i]][1]==0)fu[v[i]][1]=i;
            else fu[v[i]][2]=i;
        }
    }
    for (int i = 1; i <= m; ++i) {//第i件
        if (v[i] == 0) {
            for (int j = n; j>=0; --j) {
                //只有主件
                if (j>=q[i]){
                    dp[j] = max(dp[j], dp[j - q[i]] + w[i]);
                }
                //主件+附件1
                if (fu[i][1]!=0&&j>=q[i]+q[fu[i][1]]){
                    dp[j]=max(dp[j],dp[j-q[i]-q[fu[i][1]]]+w[i]+w[fu[i][1]]);
                }
                //主件+附件2
                if (fu[i][2]!=0&&j>=q[i]+q[fu[i][2]]){
                    dp[j]=max(dp[j],dp[j-q[i]-q[fu[i][2]]]+w[i]+w[fu[i][2]]);
                }
                //主件+附件1+附件2
                if (fu[i][1]!=0&&fu[i][2]!=0&&j>=q[i]+q[fu[i][1]]+q[fu[i][2]]){
                    dp[j]=max(dp[j],dp[j-q[i]-q[fu[i][1]]-q[fu[i][2]]]+w[i]+w[fu[i][1]]+w[fu[i][2]]);
                }
            }
        }
    }
    cout << dp[n];
    return 0;
}