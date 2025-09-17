//P1162 填涂颜色
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n;int a[302][302];int vis[302][302];int jl[100000][3];int k=1;
struct fg{
    int x,y;
    fg(int ax,int ay){
        x=ax,y=ay;
    }
};
void bfs(int i,int j){
    queue<fg>q;
    q.push(fg(i,j));
    bool p=true;
    int tt=k;
    while (!q.empty()){
        fg t=q.front();
        q.pop();
        int x=t.x,y=t.y;
        if (x<1||x>n||y<1||y>n){
            p=false;continue;
        }
        if (vis[x][y]==1)continue;
        vis[x][y]=1;
        jl[k][1]=x,jl[k][2]=y;k++;
        q.push(fg(x+1,y));
        q.push(fg(x-1,y));
        q.push(fg(x,y+1));
        q.push(fg(x,y-1));
    }
    if (p==true){
        for (int z=tt;z<k;++z){
            a[jl[z][1]][jl[z][2]]=2;
        }
    }
}
int main(){
    cin>>n;memset(a,0,sizeof(a));
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cin>>a[i][j];
            if (a[i][j]==1){
                vis[i][j]=1;
            }
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if (vis[i][j]==0){
                bfs(i,j);
            }
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}