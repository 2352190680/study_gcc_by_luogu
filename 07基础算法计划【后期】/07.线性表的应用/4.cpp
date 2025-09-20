#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int n,m;
struct stu{
    int nxt=0,pre=0,val;
};
int main(){
    cin>>n;vector<stu> a(n+1);a[1].val=1;
    for (int i=2;i<=n;++i){
        int b,c;cin>>b>>c;
        a[i].val=i;
        if (c==0){//涉及三个前后的变化
            a[i].nxt=b;
            a[i].pre=a[b].pre;
            if (a[b].pre!=0) {
                a[a[b].pre].nxt=i;
            }
            a[b].pre=i;
        }
        else if (c==1){
            a[i].nxt=a[b].nxt;
            if (a[b].nxt!=0) {
                a[a[b].nxt].pre=i;
            }
            a[b].nxt=i;
            a[i].pre=b;
        }
    }
    cin>>m;
    for (int i=1;i<=m;++i){
        int b;cin>>b;
        if (a[b].val==0)continue;
        else {
            a[b].val=0;
        }
    }
    int head;
    for (int i=1;i<=n;++i){
        if (a[i].pre==0){
            head=i;break;
        }
    }
    for (int i=1;i<=n;++i){
        if (a[head].val!=0){
            cout<<a[head].val<<" ";
        }
        head=a[head].nxt;
    }
    return 0;
}