//记忆化搜索（尚未掌握，太巧妙了，跟15.1一样，自调用的理解不够深
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;
int a[102][102];
int vis[102][102];
int maxa;
int zy[4]={0,1,0,-1};
int sx[4]={1,0,-1,0};
int dfs(int x,int y){
    if (vis[x][y])return vis[x][y];
    vis[x][y]=1;
    for (int i=0;i<4;++i){
        int xx=x+zy[i];int yy=y+sx[i];
        if (xx>0&&yy>0&&xx<=n&&yy<=m&&a[x][y]>a[xx][yy]){
            dfs(xx,yy);
            vis[x][y]=max(vis[x][y],vis[xx][yy]+1);
        }
    }
    return vis[x][y];
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            maxa=max(maxa,dfs(i,j));
        }
    }
    cout<<maxa;
    return 0;
}