#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int n,m;
vector<int>a[1001];
int vis[1001];
int num,cnt;
int sum;bool p=true;
void dfs(int x){
    vis[x]=1;num++;
    cnt+=a[x].size()%2;//记录奇数度的个数
    for (int i=0;i<a[x].size();++i){//尽量延伸中
        if (vis[a[x][i]]==0){
            dfs(a[x][i]);
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        a[x].push_back(y);a[y].push_back(x);
    }
    for (int i=1;i<=n;++i){
        cnt=num=0;
        dfs(i);
        if (num==1){
            continue;
        }
        sum+=max(1,cnt/2);//每两个便可以一笔画，所以除以二
        //根据图论中的握手定理（Handshaking Lemma），任何一个图（或图中的任意一个连通分量），其奇数度节点的个数必然是偶数。
    }
    cout<<sum;
    return 0;
}
//一笔画定理