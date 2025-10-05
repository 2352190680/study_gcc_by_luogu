#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m;
vector<int>a[1000001];
int b[1000001];
struct dis{
    int num,step;
    dis(int x=0,int y=0){
        num=x,step=y;
    }
};
int d[1000001];
void bfs(int x,int y){
    memset(d, 0x3f, sizeof(d));
    queue<dis>q;
    q.push(dis(x,y));
    d[x]=0;
    b[x]=1;
    while (!q.empty()){
        dis t=q.front();q.pop();
        int num=t.num,step=t.step;
        if(step>d[num])continue;
        for(int i=0;i<a[num].size();++i){
            int next_node=a[num][i];
            if(d[next_node]>step+1){
                d[next_node]=step+1;
                //更新数据
                b[next_node]=b[num];
                //继承上一层的最短路径
                q.push(dis(next_node,step+1));
            }
            else if(d[next_node]==step+1){//相同时，不进入队列
                b[next_node]=(b[next_node]+b[num])%100003;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        if (x==y)continue;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    bfs(1,0);
    for (int i=1;i<=n;++i){
        cout<<b[i]%100003;
        cout<<endl;
    }
    return 0;
}
/*
4 11
1 1
1 1
1 2
1 2
1 3
1 3
2 4
2 4
3 4
3 4
3 3
*/