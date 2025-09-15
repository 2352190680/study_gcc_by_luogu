#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
const int dx[8] = {1, 1, 2, 2, -1, -1, -2, -2};
const int dy[8] = {2, -2, 1, -1, 2, -2, 1, -1};
struct fg{
    int x,y;
    fg(int ax=0,int ay=0){
        x=ax,y=ay;
    }
};
int m,n,a,b;int dist[405][405];
int main(){
    cin>>m>>n>>a>>b;memset(dist, -1, sizeof(dist));
    dist[a][b]=0;
    queue<fg>q;
    q.push(fg(a,b));
    while (!q.empty()){
        fg t=q.front();q.pop();
        int x=t.x,y=t.y;
        for (int d = 0; d < 8; ++d) {
            int nx = x + dx[d], ny = y + dy[d];
            //能跳的都跳一遍，且是最短的（最先占住格子），也算一种bfs吧，能动的步数延伸
            if (nx >= 1 && nx <= m && ny >= 1 && ny <= n && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push(fg(nx,ny));
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}