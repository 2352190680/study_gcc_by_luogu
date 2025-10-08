#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int n;
int mini=1e7;
int nxt[200001];
bool vis1[200001],vis2[200001];
int step[200001];
void dfs(int x,int y){
    if (vis2[x])return;
    if (vis1[x])mini=min(mini,y-step[x]);//找环
    else{
        vis1[x]=1;//用于下面dfs的找环判断
        step[x]=y;
        dfs(nxt[x],y+1);
        vis2[x]=1;//用于记录dfs该节点是否完全
        //它表示从节点 x 出发的所有路径都已经被探索完毕，可以将 x 标记为“完全探索过”。
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>nxt[i];
    }
    for (int i=1;i<=n;++i){
        dfs(i,0);
    }
    cout<<mini;
    return 0;
}
//并查集
/*
#include<bits/stdc++.h>
using namespace std;
int n, fa[200005], ans=0x3f3f3f, cnt;
int find(int x){
    ++cnt;
	return (fa[x]==x?x:find(fa[x]));//构建链接，判断环//fa[x]==x是否有链接的占用，成环后会返回自己的状态
}
int main(){
	cin >> n;
	for(int i=1; i<=n; i++)
		fa[i]=i;
	for(int i=1, t; i<=n; cnt=0, i++)
		cin >> t;
		find(t)==i?ans=min(ans, cnt):fa[i]=t;//看t是否能回到i
	cout << ans;
	return 0;
}
 */