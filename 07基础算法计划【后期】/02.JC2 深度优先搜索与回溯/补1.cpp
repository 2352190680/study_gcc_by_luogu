#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int mini=1e9+1;int a[11][3];
void dfs(int begin,long long suan,long long ku){
    if (begin==n+1){
        if (suan==1&&ku==0)return;
        if (abs(suan-ku)<=mini)mini=abs(suan-ku);
        return ;
    }
    dfs(begin+1,suan*a[begin][1],ku+a[begin][2]);//第begin加入
    dfs(begin+1,suan,ku);//此杯不加跳过，到下一个
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i][1]>>a[i][2];
    }
    dfs(1,1,0);
    cout<<mini;
    return 0;
}