#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
struct fg{
    int x,y,z,p;
    fg(int ax=0,int ay=0,int az=0,int ap=0){
        x=ax,y=ay,z=az,p=ap;
    }
};
int n;char s[105][105];int vis[105][105];const char ck[9]="*yizhong";int jl[8][3];int teshu[105][105];
void bfs(int i,int j,int num,int p){
    queue<fg>q;
    q.push(fg(i,j,num));
    while (!q.empty()){
        fg t=q.front();
        q.pop();
        int x=t.x,y=t.y,z=t.z,p=t.p;
        jl[z][1]=x,jl[z][2]=y;
        if (x<1||x>n||y<1||y>n)continue;
        if (vis[x][y]==1)continue;
        if (ck[z]!=s[x][y])continue;
        if (vis[x][y]==1||vis[x][y]==4)continue;
        vis[x][y]=1;
        if (z==7&&s[x][y]=='g'){
            for (int k=1;k<=7;++k){
                teshu[jl[k][1]][jl[k][2]]=1;
                vis[jl[k][1]][jl[k][2]]=0;
            }
            return;
        }
        if (p==0){
            q.push(fg(x+1,y,z+1,1));
            q.push(fg(x-1,y,z+1,2));
            q.push(fg(x+1,y+1,z+1,3));
            q.push(fg(x-1,y-1,z+1,4));
            q.push(fg(x+1,y-1,z+1,5));
            q.push(fg(x-1,y+1,z+1,6));
            q.push(fg(x,y+1,z+1,7));
            q.push(fg(x,y-1,z+1,8));
        }else{
            if (p==1)q.push(fg(x+1,y,z+1,1));
            else if (p==2)q.push(fg(x-1,y,z+1,2));
            else if (p==3)q.push(fg(x+1,y+1,z+1,3));
            else if (p==4)q.push(fg(x-1,y-1,z+1,4));
            else if (p==5)q.push(fg(x+1,y-1,z+1,5));
            else if (p==6)q.push(fg(x-1,y+1,z+1,6));
            else if (p==7)q.push(fg(x,y+1,z+1,7));
            else if (p==8)q.push(fg(x,y-1,z+1,8));
        }
    }
    for (int k=1;k<=8;++k){
        vis[jl[k][1]][jl[k][2]]=0;
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cin>>s[i][j];
            if (s[i][j]!='y'&&s[i][j]!='i'&&s[i][j]!='z'&&s[i][j]!='h'&&s[i][j]!='o'&&s[i][j]!='n'&&s[i][j]!='g'){
                vis[i][j]=4;
            }
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if (vis[i][j]!=4){
                bfs(i,j,1,0);
            }
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if (teshu[i][j]==1){
                cout<<s[i][j];
            }
            else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
    return 0;
}