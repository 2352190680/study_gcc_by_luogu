#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
int n;
struct tree{
    char left,right;
};
map<char,tree>m;
void dfs(char x){
    if (x=='*')return;
    cout<<x;
    dfs(m[x].left);
    dfs(m[x].right);
}
int main(){
    cin>>n;char t;
    for (int i=1;i<=n;++i){
        char a,b,c;cin>>a>>b>>c;
        if (i==1)t=a;
        m[a].left=b,m[a].right=c;
    }
    dfs(t);
    return 0;
}
// 前序：根→左→右
// 中序：左→根→右
// 后序：左→右→根