// #include<iostream>
// #include<cmath>
// #include<string>
// #include<cstring>
// #include<algorithm>
// #include<vector>
// #include<queue>
// using namespace std;
// int n;
// int len[10001];
// int degree[10001];
// int t[10001];
// vector<int>son[10001];
// int max_time;
// void bfs(){
//     queue<int>q;
//     for(int i=1;i<=n;++i){//可能多起点
//         if(degree[i]==0){
//             q.push(i);
//             t[i]=len[i];
//         }
//     }
//     while (!q.empty()) {
//         int u=q.front();
//         q.pop();
//         for (int i=0;i<son[u].size();++i){
//             int v=son[u][i];
//             t[v]=max(t[v],t[u]+len[v]);
//             degree[v]--;
//             if(degree[v]==0){
//                 q.push(v);
//             }
//         }
//     }
// }
// int main(){
//     cin>>n;
//     for(int i=1;i<=n;++i){
//         int x;
//         cin>>x;
//         cin>>len[x];
//         while(1){
//             int y;
//             cin>>y;
//             if(y==0)break;
//             else{
//                 son[y].push_back(x);
//                 degree[x]++;
//             }
//         }
//     }
//     bfs();
//     for (int i=1;i<=n;++i) {
//         max_time=max(max_time,t[i]);
//     }//sort更快，输出最后一位
//     cout<<max_time<<endl;
//     return 0;
// }
/*
6
1 1 0
2 1 1 0
3 1 2 0
4 1 3 0
5 2 4 0
6 5 1 0
*/

#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,ans;
int len[10001],vis[10001];
vector<int>son[10001];
int dfs(int x){
    if (vis[x])return vis[x];
    for (int i=0;i<son[x].size();++i){
        vis[x]=max(vis[x],dfs(son[x][i]));//向下找,同时与自身对比，确定最晚进行的时候
    }
    vis[x]+=len[x];
    return vis[x];
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        int x;cin>>x;cin>>len[x];
        while(1){
            int y;cin>>y;
            if (y==0)break;
            else{
                son[y].push_back(x);
            }
        }
    }
    for (int i=1;i<=n;++i){
        if (!son[i].empty())ans=max(ans,dfs(i));
    }
    cout<<ans;
    return 0;
}