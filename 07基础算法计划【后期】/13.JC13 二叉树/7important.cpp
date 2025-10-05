//P3884 [JLOI2009] 二叉树问题
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
int n;int xx,yy;int width_max;int depth_max;int vis[105];int wid[105];
struct Node{
    int l=0,r=0,d=1,father;
}a[101];
struct write{
    int pos,step;
    write(int a=0,int b=0){
        pos=a,step=b;
    }
};
void dfs(int x){
    if (vis[x]==1)return;
    vis[x]=1;
    int l=a[x].l,r=a[x].r,deep=a[x].d;
    depth_max=max(depth_max,deep);
    wid[deep]++;
    width_max=max(width_max,wid[deep]);
    if (l){
        a[l].d=deep+1;
        dfs(l);
    }
    if (r){
        a[r].d=deep+1;
        dfs(r);
    }  
    return;
}
void bfs(int z,int s){
    vis[z]==1;
    queue<write>q;
    q.push(write(z,s));
    while(!q.empty()){
        write t=q.front();
        q.pop();
        int pos=t.pos,left=a[pos].l,right=a[pos].r,father=a[pos].father,step=t.step;
        if (pos==yy){
            cout<<step<<endl;exit(0);
        }
        if (left&&!vis[left]){
            vis[left]=1;
            q.push(write(left,step+1));
        }
        if (right&&!vis[right]){
            vis[right]=1;
            q.push(write(right,step+1));
        }
        if (father&&!vis[father]){
            vis[father]=1;
            q.push(write(father,step+2));
        }
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n-1;++i){
        int x,y;cin>>x>>y;
        if (a[x].l)a[x].r=y;
        else a[x].l=y;
        a[y].father=x;
    }
    cin>>xx>>yy;
    dfs(1);
    cout<<depth_max<<endl<<width_max<<endl;

    memset(vis,0,sizeof(vis));
    bfs(xx,0);
    return 0;
}