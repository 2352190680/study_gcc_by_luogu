#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,t,x,y,x2,y2;int a[11][2];int vis[6][6];int sum;
void dfs(int i,int j){
    if (i==x2&&j==y2){
        sum++;return;
    }
    if (i<1||i>n)return;
    if (j<1||j>m)return;
    if (vis[i+1][j]==0){vis[i+1][j]=1;dfs(i+1,j);vis[i+1][j]=0;}
    if (vis[i-1][j]==0){vis[i-1][j]=1;dfs(i-1,j);vis[i-1][j]=0;}
    if (vis[i][j+1]==0){vis[i][j+1]=1;dfs(i,j+1);vis[i][j+1]=0;}
    if (vis[i][j-1]==0){vis[i][j-1]=1;dfs(i,j-1);vis[i][j-1]=0;}
    return;
}
int main(){
    cin>>n>>m>>t;
    cin>>x>>y>>x2>>y2;
    for (int i=1;i<=t;++i){
        cin>>a[i][1]>>a[i][2];
        vis[a[i][1]][a[i][2]]=1;
    }
    vis[x][y]=1;
    dfs(x,y);
    cout<<sum;
    return 0;
}