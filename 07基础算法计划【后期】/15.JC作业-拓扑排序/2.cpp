#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n;
vector<int>son[101];
int vis[101];
int degree[101];
queue<int>q;
void bfs(){
    while(!q.empty()){
        int t=q.front();q.pop();
        cout<<t<<" ";
        for (int i=0;i<son[t].size();++i){
            degree[son[t][i]]--;
            if (!degree[son[t][i]]){
                q.push(son[t][i]);
            }
        }
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        while(1){
            int x;cin>>x;
            if (x==0)break;
            else{
                son[i].push_back(x);
                degree[x]++;
            }
        }
    }
    for (int i=1;i<=n;++i){
        if (!degree[i]){
            q.push(i);
        }
    }
    bfs();
    return 0;
}