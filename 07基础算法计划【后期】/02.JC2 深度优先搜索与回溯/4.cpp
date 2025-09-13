#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,l,r;int a[41];int sum;
void dfs(int begin,int x){
    if (x>r)return;
    else if (x<=r&&x>=l){
        sum++;//注意，满足条件后仍可以继续吃，不用返回！！！
    }
    if (begin==n+1){
        return;
    }
    for (int i=begin;i<=n;++i){
        dfs(i+1,x+a[i]);
    }
}
int main(){
    cin>>n>>l>>r;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    dfs(1,sum);
    cout<<sum;
    return 0;
}