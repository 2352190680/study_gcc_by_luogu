#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long n,m;
int a[501][501];int vis[501][501];
void dfs(int x,int y,long long sum){
    if (vis[x][y]){
        m=(m-sum)%(sum-vis[x][y])+sum;//(sum-vis[x][y])为循环节，+sum可以在接下来的一次循环中输出结果
    }
    if (sum==m){
        cout<<x;exit(0);
    }
    vis[x][y]=sum;
    dfs(y,a[y][x],sum+1);
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cin>>a[i][j];
        }
    }
    dfs(1,2,1);
    return 0;
}