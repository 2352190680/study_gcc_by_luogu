#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;int l[400];int dp[41][41][41][41];int da;int a,b,c,d;
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i)cin>>l[i];
    for (int i=1;i<=m;++i){
        int z;cin>>z;
        if (z==1)a++;
        else if (z==2)b++;
        else if (z==3)c++;
        else if (z==4)d++;
    }//记录1，2，3，4的数量
    dp[0][0][0][0]=l[1];//起始，一张牌都没出
    for (int i=0;i<=a;++i){
        for (int j=0;j<=b;++j){
            for (int k=0;k<=c;++k){
                for (int w=0;w<=d;++w){
                    int ge=1+i*1+j*2+k*3+w*4;int da=0;
                    if (i!=0)da=max(dp[i-1][j][k][w]+l[ge],da);
                    if (j!=0)da=max(dp[i][j-1][k][w]+l[ge],da);
                    if (k!=0)da=max(dp[i][j][k-1][w]+l[ge],da);
                    if (w!=0)da=max(dp[i][j][k][w-1]+l[ge],da);
                    dp[i][j][k][w]=max(da,dp[i][j][k][w]);
                    //巧妙，一定要理清逻辑
                }
            }
        }
    }
    cout<<dp[a][b][c][d];
    return 0;
}