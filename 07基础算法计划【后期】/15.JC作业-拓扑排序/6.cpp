#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m,s,t;
vector<int>fa[10001];
int degree[10001];
int ceng[10001];
bool vis[10001];
bool pd[10001];
void bfs_safe(int x){
    queue<int>q;
    q.push(x);
    pd[x]=1;//用bfs能避免dfs的重复计数  使不安全变为安全
    while(!q.empty()){
        int z=q.front();q.pop();
        for (int i=0;i<fa[z].size();++i){
            int y=fa[z][i];
            degree[y]--;//同时确保是否安全
            if (!pd[y]){
                pd[y]=1;q.push(y);
            }
        }
    }
}//牛的，多加一个判断就行了
void bfs(int x){
    queue<int>q;
    q.push(x);
    vis[x]=true; 
    while(!q.empty()){
        int y=q.front();q.pop();
        for (int i=0;i<fa[y].size();++i){
            int yy=fa[y][i];
            if (!degree[yy]&&!vis[yy]){
                vis[yy]=true;    
                q.push(yy);
                ceng[yy]=ceng[y]+1;
                if (yy==s)return;
            }
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        fa[y].push_back(x);
        degree[x]++;
    }
    memset(ceng,0x7f,sizeof(ceng));
    cin>>s>>t;ceng[t]=0;
    bfs_safe(t);
    bfs(t);
    if (ceng[s]!=0x7f7f7f7f){
        cout<<ceng[s];
    }
    else{
        cout<<-1;
    }
    return 0;
}
/*
5 8
1 2
1 2
2 1
2 4
2 3
4 3
3 5
4 5
1 5
 */