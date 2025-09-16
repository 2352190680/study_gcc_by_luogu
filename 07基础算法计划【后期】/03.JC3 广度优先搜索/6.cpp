#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m,x,y,x2,y2;int lst[20][20];int flag[20][20];int jing[300][3];bool p=false;
void dfs(int x,int y,int ci){
    jing[ci][1]=x,jing[ci][2]=y;
    if (x==x2&&y==y2){
        p=true;
        for (int i=1;i<=ci-1;++i){
            printf("(%d,%d)->",jing[i][1],jing[i][2]);
        }
        printf("(%d,%d)\n",jing[ci][1],jing[ci][2]);
        return;
    }
    if (flag[x+1][y]==1&&flag[x-1][y]==1&&flag[x][y-1]==1&&flag[x][y+1]==1){
        return;
    }
    flag[x][y]=1;
    if (flag[x][y-1]!=1){
        dfs(x,y-1,ci+1);
        flag[x][y-1]=0;
    }
    if (flag[x-1][y]!=1){
        dfs(x-1,y,ci+1);
        flag[x-1][y]=0;
    }
    if (flag[x][y+1]!=1){
        dfs(x,y+1,ci+1);
        flag[x][y+1]=0;
    }
    if (flag[x+1][y]!=1){
        dfs(x+1,y,ci+1);
        flag[x+1][y]=0;
    }
}
int main(){
    cin>>n>>m;
    for (int i=0;i<=n+1;++i){
        flag[i][0]=1;flag[i][m+1]=1;
    }
    for (int i=0;i<=m+1;++i){
        flag[0][i]=1;flag[n+1][i]=1;
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>lst[i][j];
            if (lst[i][j]==0){
                flag[i][j]=1;
            }
        }
    }
    cin>>x>>y>>x2>>y2;
    dfs(x,y,1);
    if (p==false){
        cout<<-1;
    }
    return 0;
}