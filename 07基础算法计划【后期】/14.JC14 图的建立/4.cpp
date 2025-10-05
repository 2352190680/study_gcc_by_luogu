#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int k,n,m;//k牛数量    n地方数量       m路径数量
vector<int>a[1001];
int space[101];
int sum;
int vis[1001];
void bfs(int x){
    queue<int>q;
    q.push(x);
    int v[1001];memset(v,0,sizeof(v));
    v[x]=1;
    while (!q.empty()){
        int t=q.front();q.pop();
        vis[t]++;
        for (int i=0;i<a[t].size();++i){
            if (v[a[t][i]]==0){
                q.push(a[t][i]); 
                v[a[t][i]]=1;
            }
        }
    }
}
int main(){
    cin>>k>>n>>m;
    for (int i=1;i<=k;++i){
        cin>>space[i];
    }
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        a[x].push_back(y);
    }
    for (int i=1;i<=k;++i){
        bfs(space[i]);
    }
    for (int i=1;i<=n;++i){
        if (vis[i]==k){sum++;}
    }
    cout<<sum;
    return 0;
}