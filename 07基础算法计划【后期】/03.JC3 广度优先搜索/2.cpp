//P1443 马的遍历
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
struct fg{
    int x,y;
    fg(int ax=0,int ay=0){//定义时可以直接赋值（不特别说明就默认0，0；输入就赋值）
        x=ax,y=ay;
    }
};
int n,m;char s[102][102];bool pd=false;int vis[102][102];
using namespace std;
void bfs(){
    queue<fg>q;
    q.push(fg(1,1));
    while (!q.empty()){
        fg t=q.front();
        q.pop();
        int x=t.x,y=t.y;
        if (x<1||x>n)continue;
        if (y<1||y>m)continue;
        if (s[x][y]=='#')continue;
        if (vis[x][y]==1)continue;
        vis[x][y]=1;
        if (x==n&&y==m){
            pd=true;return;
        }
        q.push(fg(x+1,y));
        q.push(fg(x-1,y));
        q.push(fg(x,y+1));
        q.push(fg(x,y-1));
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>s[i][j];
        }
    }
    bfs();
    if (pd==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}