#include<bits/stdc++.h>
using namespace std;
int n,m;int vis[301][301];char playground[302][302];
int chuansong[301][301][3];
struct fg{
    int x,y,step;
    fg(int ax=0,int ay=0,int az=0){
        x=ax,y=ay,step=az;
    }
};
void bfs(int begin_x,int begin_y){
    queue<fg>q;
    vis[begin_x][begin_y]=1;
    q.push(fg(begin_x,begin_y));
    while(!q.empty()){
        fg t=q.front();q.pop();
        int x=t.x,y=t.y,step=t.step;
        if (playground[x][y]=='='){
            cout<<step;exit(0);//用step记录比 层 更方便
        }
        //注意了，传送门不能标记，可能不需要传送，需要回来，比如门在传送点旁边却被传走了
        if (playground[x][y]!='@'&&playground[x][y]!='.'&&playground[x][y]!='#'&&playground[x][y]!='='){
            int t=x;//小心x会改变；
            x=chuansong[t][y][1],y=chuansong[t][y][2];
        }
        if (x>1&&vis[x-1][y]==0&&playground[x-1][y]!='#'){vis[x-1][y]=1;q.push(fg(x-1,y,step+1));}
        if (x<n&&vis[x+1][y]==0&&playground[x+1][y]!='#'){vis[x+1][y]=1;q.push(fg(x+1,y,step+1));}
        if (y<m&&vis[x][y+1]==0&&playground[x][y+1]!='#'){vis[x][y+1]=1;q.push(fg(x,y+1,step+1));}
        if (y>1&&vis[x][y-1]==0&&playground[x][y-1]!='#'){vis[x][y-1]=1;q.push(fg(x,y-1,step+1));}
    }
}
int main(){
    cin>>n>>m;
    int begin_x,begin_y;
    int door[27][4]={0};
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>playground[i][j];
            if (playground[i][j]=='@'){
                begin_x=i,begin_y=j;
            }
            else if (playground[i][j]!='.'&&playground[i][j]!='#'&&playground[i][j]!='='){
                int t=playground[i][j]-'A'+1;
                if (door[t][3]==0){
                    door[t][1]=i,door[t][2]=j;door[t][3]++;
                }
                else{
                    chuansong[i][j][1]=door[t][1],chuansong[i][j][2]=door[t][2];
                    chuansong[door[t][1]][door[t][2]][1]=i,chuansong[door[t][1]][door[t][2]][2]=j;
                }
            }
        }
    }
    bfs(begin_x,begin_y);
    return 0;
}