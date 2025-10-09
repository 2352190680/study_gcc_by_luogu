//跟6为同一题
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m,s,t;
bool can_reach_t[10001]; // 改动1：用于标记节点是否能到达t
int ceng[10001];
int out_degree[10001]; // 改动2：变量名更清晰，表示出度
vector<int>fa[10001];
vector<int>son[10001];
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        fa[y].push_back(x);son[x].push_back(y);
        out_degree[x]++;
    }
    cin>>s>>t;
    // 步骤1: 找出所有能到达终点 t 的点 (在反向图上BFS)
    queue<int>q_reach;
    q_reach.push(t);
    can_reach_t[t] = true;
    while(!q_reach.empty()){
        int u = q_reach.front(); q_reach.pop();
        for (int v : fa[u]){
            if (!can_reach_t[v]){
                can_reach_t[v] = true;
                q_reach.push(v);
            }
        }
    }
    // 步骤2: 找出所有不“安全”的点并标记
    // 一个点不安全，如果它的某个出边指向了无法到达t的点
    queue<int> q_safe;
    for (int i = 1; i <= n; ++i) {
        if (can_reach_t[i]) { // 只有能到t的点才可能是安全的
            for (int neighbor : son[i]) {
                if (!can_reach_t[neighbor]) {
                    can_reach_t[i] = false; // 标记为不安全
                    q_safe.push(i);
                    break;
                }
            }
        }
    }
    // 传播不安全属性：如果一个点u的邻居v不安全，那么u也不安全
    while(!q_safe.empty()){
        int u = q_safe.front(); q_safe.pop();
        for(int v : fa[u]){
            if(can_reach_t[v]){
                can_reach_t[v] = false;
                q_safe.push(v);
            }
        }
    }
    //以上可以只用dfs结束，毕竟能到就蕴含了诸多条件，dfs时入度为0时说明了满足

    // 步骤3: 在安全点上做BFS求最短路
    if (!can_reach_t[s]) { // 如果起点不安全，无解
        cout << -1 << endl;
        return 0;
    }
    memset(ceng, -1, sizeof(ceng));
    queue<int>q_bfs;
    q_bfs.push(s);
    ceng[s] = 0;
    while(!q_bfs.empty()){
        int u = q_bfs.front(); q_bfs.pop();
        if (u == t) break;
        for (int v : son[u]){
            if (can_reach_t[v] && ceng[v] == -1){ // 只走向安全且未访问过的点
                ceng[v] = ceng[u] + 1;
                q_bfs.push(v);
            }
        }
    }
    cout << ceng[t] << endl;
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