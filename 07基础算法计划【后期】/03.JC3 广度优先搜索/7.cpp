//P1596 [USACO10OCT] Lake Counting S
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m;char s[105][105];int sum;int vis[105][105];
struct abc{
    int a,b;
    abc(int ax,int by){
        a=ax,b=by;
    }
};
void bfs(int x,int y){
    queue<abc>q;
    q.push(abc(x,y));
    while (!q.empty()){
        abc t=q.front();
        q.pop();
        int a=t.a,b=t.b;
        if (a<1||a>n)continue;
        if (b<1||b>m)continue;
        if (s[a][b]!='W')continue;
        if (vis[a][b]==1){
            continue;
        }
        vis[a][b]=1;
        q.push(abc(a,b-1));
        q.push(abc(a,b+1));
        q.push(abc(a+1,b+1));
        q.push(abc(a+1,b-1));
        q.push(abc(a-1,b-1));
        q.push(abc(a-1,b+1));
        q.push(abc(a+1,b));
        q.push(abc(a-1,b));
    }
    return;
}
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>s[i][j];
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            if (s[i][j]=='W'&&vis[i][j]==0){
                bfs(i,j);sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}