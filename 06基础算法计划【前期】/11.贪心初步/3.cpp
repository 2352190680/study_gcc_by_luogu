//陶陶摘苹果（升级版）
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,s,a,b;int sum=0;
struct infor{
    int x,y;
};
bool cmp(infor a,infor b){
    return a.y<b.y;
}
int main(){
    cin>>n>>s>>a>>b;infor l[n+1];
    for (int i=1;i<=n;++i){
        cin>>l[i].x>>l[i].y;
    }
    sort(l+1,l+n+1,cmp);
    for (int i=1;i<=n;++i){
        if (l[i].x<=a+b){
            if (s-l[i].y>=0){
                s-=l[i].y;sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}