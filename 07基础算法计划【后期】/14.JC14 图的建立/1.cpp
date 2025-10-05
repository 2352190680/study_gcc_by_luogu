#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
using namespace std;
int n,m;
vector<int>a[100001];
map<int,int>mapp;
map<int,int>mappp;
void dfs(int x){
    cout<<x<<" ";
    mapp[x]=0;
    for (int i=0;i<a[x].size();++i){
        if (mapp[a[x][i]]){
            dfs(a[x][i]);
        }
    }
}
void bfs(int x){
    queue<int>q;
    q.push(x);
    mappp[x]=0;
    while (!q.empty()){
        int t=q.front();
        cout<<t<<" ";
        q.pop();
        for (int i=0;i<a[t].size();++i){
            if (mappp[a[t][i]]){
                mappp[a[t][i]]=0;
                q.push(a[t][i]);
            }
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        mapp[y]=1;mappp[y]=1;
        a[x].push_back(y);
    }
    for (int i=1;i<=n;++i){
        sort(a[i].begin(),a[i].end());
    }
    dfs(1);
    cout<<endl;
    bfs(1);
    return 0;
}