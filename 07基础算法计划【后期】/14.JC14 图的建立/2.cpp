#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int n,m;int deg[1001];int a[1001][1001];
vector<int>b[1001];
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        deg[x]++,deg[y]++;
        a[x][y]=a[y][x]=1;
        b[x].push_back(y),b[y].push_back(x);
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=1;i<=n;++i){
        sort(b[i].begin(),b[i].end());
    }
    for (int i=1;i<=n;++i){
        cout<<deg[i]<<" ";
        for (int j=0;j<b[i].size();++j){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}