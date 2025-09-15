#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m,x1,y11,x2,y2;int lst[20][20];int vis[20][20];
struct jl{
    int x,y;
    jl(int ax=0,int ay=0){
        x=ax,y=ay;
    }
};
void bfs(int x1,int y11){
    queue<jl>q;
    queue<jl>p;
    q.push(jl(x1,y11));p.push(jl(x1,y11));
    while (!q.empty()){
        jl t=q.front();
        q.pop();
        int x=t.x,y=t.y;
        if (x<1||x>n){
            p.pop();continue;
        }
        if (y<1||y>m){
            p.pop();continue;
        }
        vis[x][y]=1;
        if (x==x2&&y==y2){
            queue<jl> pp = p;
            while(!pp.empty()){
                printf("(%d,%d)",pp.front().x,pp.front().y);
                vis[p.front().x][p.front().y]=0;
                pp.pop();
                if (!pp.empty()){
                    cout<<"->";
                }
            }
            cout<<endl;
            p.pop();
            continue;
        }
        if (lst[x+1][y]!=0&&vis[x+1][y]!=1){q.push(jl(x+1,y));p.push(jl(x+1,y));}
        if (lst[x-1][y]!=0&&vis[x-1][y]!=1){q.push(jl(x-1,y));p.push(jl(x-1,y));}
        if (lst[x][y+1]!=0&&vis[x][y+1]!=1){q.push(jl(x,y+1));p.push(jl(x,y+1));}
        if (lst[x][y-1]!=0&&vis[x][y-1]!=1){q.push(jl(x,y-1));p.push(jl(x,y-1));}
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>lst[i][j];
        }
    }
    cin>>x1>>y11>>x2>>y2;
    bfs(x1,y11);


    return 0;
}