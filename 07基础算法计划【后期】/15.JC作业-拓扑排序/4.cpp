#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m;
long long vis[1501];
int len[1501][1501],degree[1501];
vector<int>to[1501];
void bfs(){
    queue<int>q;
    for (int i=1;i<=n;++i){
        if (!degree[i]){
            q.push(i);
        }
    }
    while(!q.empty()){
        int t=q.front();q.pop();
        for (int i=0;i<to[t].size();++i){
            int a=to[t][i];
            if (vis[t]!=0x8080808080808080LL){//判断是否是从1来的
                vis[a]=max(vis[a],vis[t]+len[t][a]);
            }
            degree[a]--;
            if (!degree[a]){
                q.push(a);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>m;memset(vis,0x80,sizeof(vis));
    vis[1]=0;
    memset(len,0x80,sizeof(len));
    for (int i=1;i<=m;++i){
        int u,v,w;cin>>u>>v>>w;
        len[u][v]=max(w,len[u][v]);
        to[u].push_back(v);degree[v]++;
    }
    bfs();
    if (vis[n]!=0x8080808080808080LL)cout<<vis[n];
    else{
        cout<<-1;
    }
    return 0;
}