#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
struct Node{
    int left,right;
}t[1000001];
void dfs(int x){
    if (x==0)return;
    cout<<x<<" ";
    dfs(t[x].left);
    dfs(t[x].right);
}
void dfss(int x){
    if (x==0)return;
    dfss(t[x].left);
    cout<<x<<" ";
    dfss(t[x].right);
}
void dfsss(int x){
    if (x==0)return;
    dfsss(t[x].left);
    dfsss(t[x].right);
    cout<<x<<" ";
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i)cin>>t[i].left>>t[i].right;
    dfs(1);
    cout<<endl;
    dfss(1);
    cout<<endl;  
    dfsss(1);
    cout<<endl;  
    return 0;
}