#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
struct node{
    int num,step;
    node(int a=0,int b=0){
        num=a,step=b;
    }
};
int son[1001][1001];
//在此类往复会经过的站点时，显然用边径的方法会明显优于用数组存放所有经过的结点，防止MLE
queue<node>q;
int sum;
int n,m;
bool vis[1001];
int degree[1001];
void bfs(){
    while(!q.empty()){
        node t=q.front();q.pop();
        int num=t.num,step=t.step;
        sum=max(sum,step);
        for (int i=1;i<1000;++i){
            if (son[num][i]){
                degree[i]--;
                if (!degree[i])q.push(node(i,step+1));                
            }
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int ge;cin>>ge;
        int a[ge+1];
        memset(vis,0,sizeof(vis));
        for (int j=1;j<=ge;++j){
            cin>>a[j];vis[a[j]]=1;
        }
        for (int j=a[1];j<=a[ge];++j){
            if (!vis[j]){
                for (int k=1;k<=ge;++k){
                    if(!son[a[k]][j])degree[j]++;
                    son[a[k]][j]=1;
                }
            }
        }
    }
    for (int i=1;i<=n;++i){
        if (!degree[i]){
            q.push(node(i,1));
        }
    }
    bfs();
    cout<<sum;
    return 0;
}