#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m;
vector<int>a[100001];
int b[100001];
int vis[100001];
void bfs(int x){
    queue<int>q;
    q.push(x);
    vis[x]=1;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        b[t]=x;
        for (int i=0;i<a[t].size();++i){
            if (vis[a[t][i]]==0){
                vis[a[t][i]]=1;
                q.push(a[t][i]);
            }
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        a[y].push_back(x);
    }
    for (int i=n;i>=1;--i){
        if (vis[i]==0){
            bfs(i);
        }
    }
    for (int i=1;i<=n;++i){
        cout<<b[i]<<" ";
    }
    return 0;
}