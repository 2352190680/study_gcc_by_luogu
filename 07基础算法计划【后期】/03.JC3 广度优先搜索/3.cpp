#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n;int vis[1000001];
struct pos{
    int x,y;
    pos(int xa=0,int ya=0){
        x=xa,y=ya;
    }
};
void bfs(){
    queue<pos>q;
    q.push(pos(1,0));
    while (!q.empty()){
        pos t=q.front();
        q.pop();
        int x=t.x,y=t.y;
        if (x<1||x>n){continue;}
        if (vis[x]==1){
            continue;
        }
        vis[x]=1;
        if (x==n){
            cout<<y;exit(0);
        }
        q.push(pos(2*x,y+1));
        q.push(pos(x+1,y+1));
        q.push(pos(x-1,y+1));
    }
}
int main(){
    cin>>n;
    bfs();
    return 0;
}