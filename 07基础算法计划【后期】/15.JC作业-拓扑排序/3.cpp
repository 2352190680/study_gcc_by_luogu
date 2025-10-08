#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m;long long sum;
vector<int>enemy[5001];
queue<int>q;
int degree[5001];
int d[5001];
long long vis[5001];
void bfs(){
    while(!q.empty()){
        int t=q.front();q.pop();
        for (int i=0;i<enemy[t].size();++i){
            degree[enemy[t][i]]--;
            if (!degree[enemy[t][i]]){
                q.push(enemy[t][i]);
            }
            vis[enemy[t][i]]=(vis[enemy[t][i]]+vis[t])%80112002;//666，这里也要取余
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        enemy[x].push_back(y);
        degree[y]++;d[x]++;
    }
    for (int i=1;i<=n;++i){
        if (!degree[i]){
            q.push(i);
            vis[i]=1;
        }
    }
    bfs();
    for (int i=1;i<=n;++i){
        if (!d[i]){
            sum=(sum+vis[i])%80112002;
        }
    }
    cout<<sum;
    return 0;
}