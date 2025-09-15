#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m;int a[102][102];int sum=0;int vis[102][102];
struct ceil1{
    int x,y;
    ceil1(int ax=0,int ay=0){
        x=ax,y=ay;
    }
};
void bfs(int i,int j){
    queue<ceil1>q;
    q.push(ceil1(i,j));
    while (!q.empty()){
        ceil1 t=q.front();
        q.pop();
        int x=t.x,y=t.y;
        if (x<1||x>n)continue;
        if (y<1||y>m)continue;
        if (a[x][y]==0)continue;
        if (vis[x][y]==1)continue;
        vis[x][y]=1;
        q.push(ceil1(x+1,y));
        q.push(ceil1(x-1,y));
        q.push(ceil1(x,y+1));
        q.push(ceil1(x,y-1));
    }
    return;
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            char c;//这里，控制每次读入一个数字，否则直接读一行
            cin>>c;
            a[i][j]=c-'0';
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            if (a[i][j]!=0&&vis[i][j]==0){
                sum++;bfs(i,j);
            }
        }
    }
    cout<<sum;
    return 0;
}