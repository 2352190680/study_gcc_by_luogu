#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
struct Node{
    int l,r;
}a[1000001];
int dfs(int x){
    if (x==0)return 0;
    int l=dfs(a[x].l);
    int r=dfs(a[x].r);
    return max(l,r)+1;
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i].l>>a[i].r;
    }
    cout<<dfs(1);
    return 0;
}