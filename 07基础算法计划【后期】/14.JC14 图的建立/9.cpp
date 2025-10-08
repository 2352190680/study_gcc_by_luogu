// //Hierholzer 算法
// #include<iostream>
// #include<cmath>
// #include<string>
// #include<cstring>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int m;
// vector<int>a[501];
// int b[501][501];
// int d[501];
// int max_num;
// int c[1025];
// bool p=true;
// void dfs(int x,int y){
//     c[y]=x;
//     if (y==m+1){
//         p=false;
//         return;
//     }
//     if (y>1&&y<m+1&&d[x]==0)return;//剪枝，一笔画定理，中间节点的度数不能为奇数
//     d[x]--;
//     for (int i=0;i<a[x].size();++i){
//         if (b[x][a[x][i]]>0&&p){
//             b[x][a[x][i]]--;b[a[x][i]][x]--;d[a[x][i]]--;
//             dfs(a[x][i],y+1);
//             if(!p)return;
//             b[x][a[x][i]]++;b[a[x][i]][x]++;d[a[x][i]]++;
//         }
//     }
//     d[x]++;
// }
// int main(){
//     cin>>m;
//     for (int i=1;i<=m;++i){
//         int x,y;cin>>x>>y;max_num=max(max(x,y),max_num);
//         b[x][y]++,b[y][x]++;d[x]++,d[y]++;
//         a[x].push_back(y),a[y].push_back(x);
//     }
//     for (int i=1;i<=max_num;++i){
//         sort(a[i].begin(),a[i].end());
//     }
//     // 从度数为奇数的节点或度数为偶数的节点开始搜索
//     // 优先从奇数度节点开始，因为它们更可能是路径的端点
//     for (int i=1;i<=max_num&&p;++i){
//         if(a[i].size()%2==1){dfs(i,1);break;}
//     }
//     for (int i=1;i<=max_num&&p;++i){
//         if(a[i].size()){dfs(i,1);break;}
//     }
//     for (int i=1;i<=m+1;++i){
//         cout<<c[i]<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int m;
int degree[501];
vector<int> adj[501]; // 只用邻接表即可
stack<int> path_stack; // 用栈来存储路径，方便逆序
// Hierholzer算法的DFS实现
void find_path(int u) {
    // 遍历邻居时，从后往前遍历并删除，可以避免迭代器失效
    while (!adj[u].empty()) {
        int v = adj[u].back(); // 取出字典序最大的邻居
        adj[u].pop_back(); // 删除这条边
        // 从邻居的邻接表中也删除对应的反向边
        for (int i = 0; i < adj[v].size(); ++i) {
            if (adj[v][i] == u) {
                adj[v].erase(adj[v].begin() + i);
                break;
            }
        }
        find_path(v);
    }
    // 当节点u的所有边都走完后（无路可走），将u压入栈
    path_stack.push(u);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m;
    int max_node = 0;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
        max_node = max({max_node, u, v});
    }
    // 为了字典序最小，邻接表需要从大到小排序
    // 这样每次取 back() 都是取字典序最小的邻居
    for (int i = 1; i <= max_node; ++i) {
        sort(adj[i].rbegin(), adj[i].rend());//降序
    }
    int start_node = -1;
    // 寻找起点：优先找度数为奇数的最小编号节点
    for (int i = 1; i <= max_node; ++i) {
        if (degree[i] % 2 != 0) {
            start_node = i;
            break;
        }
    }
    // 如果没有奇数度节点（欧拉回路），则从最小的非零度节点开始
    if (start_node == -1) {
        for (int i = 1; i <= max_node; ++i) {
            if (degree[i] > 0) {
                start_node = i;
                break;
            }
        }
    }
    find_path(start_node);
    // 栈中存储的就是逆序的路径，直接从栈顶输出就是正序
    while (!path_stack.empty()) {
        cout << path_stack.top() << "\n";
        path_stack.pop();
    }
    return 0;
}