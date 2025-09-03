//# 约瑟夫问题
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<queue>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    queue<int>q;
    for (int i=1;i<=n;++i){
        q.push(i);
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m-1;++j){
            q.push(q.front());
            q.pop();//到对应数
        }
        cout<<q.front()<<" ";
        q.pop();//去除后再弹出
    }
    return 0;
}