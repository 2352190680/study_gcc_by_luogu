//P1135 奇怪的电梯
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,a,b;int l[202];int vis[202];
struct lift{
    int x,y;
    lift(int ax=0,int ay=0){
        x=ax,y=ay;
    }
};
void bfs(int i,int j){
    queue<lift>q;
    q.push(lift(i,j));
    while (!q.empty()){
        lift t=q.front();
        q.pop();
        int x=t.x,y=t.y;
        if (x==b){
            cout<<y;exit(0);
        }
        if (x<1||x>n)continue;
        if (vis[x]==1)continue;
        vis[x]=1;
        q.push(lift(x+l[x],y+1));
        q.push(lift(x-l[x],y+1));
    }
    cout<<-1;exit(0);
}
int main(){
    cin>>n>>a>>b;
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    bfs(a,0);
    return 0;
}