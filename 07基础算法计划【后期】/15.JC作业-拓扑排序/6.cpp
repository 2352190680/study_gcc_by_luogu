#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m,s,t;
int ceng[10001];
int degree[10001];
bool can[10001];
vector<int>fa[10001];
vector<int>son[10001];
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        fa[y].push_back(x);son[x].push_back(y);
        degree[x]++;
    }
    cin>>s>>t;
    queue<int>q;
    q.push(t);
    memset(ceng,0x7f,sizeof(ceng));
    ceng[t]=0;
    while(!q.empty()){
        int tt=q.front();q.pop();
        for (int i=0;i<fa[tt].size();++i){
            degree[fa[tt][i]]--;
            if(degree[fa[tt][i]]==0){
                int mini=0x7f7f7f7f;
                for (int j=0;j<son[fa[tt][i]].size();++j){
                    mini=min(mini,ceng[son[fa[tt][i]][j]]+1);
                }
                ceng[fa[tt][i]]=mini;
                vis[fa[tt][i]]=1;
                q.push(fa[tt][i]);
            }
            else if (!vis[fa[tt][i]])q.push(fa[tt][i]);
        }
    }
    if (ceng[s]!=0x7f7f7f7f)cout<<ceng[s];
    else cout<<-1;
    return 0;
}
/*
4 4
3 4
4 2
2 3
2 1
4 1
*/