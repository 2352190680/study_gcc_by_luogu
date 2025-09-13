//The Great Hero
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
struct hero{
    long long at,hp;
};
struct monster{
   long long at,hp;
};
bool cmp(monster x,monster y){
    return x.at<y.at;
}
int main(){
    int t;cin>>t;int l[t+1];hero h[t+1];
    for (int i=1;i<=t;++i){
        cin>>h[i].at>>h[i].hp;
        int n;cin>>n;
        monster m[n+1];
        for (int j=1;j<=n;++j){
            cin>>m[j].at;
        }
        for (int j=1;j<=n;++j){
            cin>>m[j].hp;
        }
        sort(m+1,m+n+1,cmp);
        for (int j=1;j<=n;++j){
            h[i].hp-=ceil(m[j].hp*1.0/h[i].at)*m[j].at;
        }
        if (h[i].hp<0&&abs(h[i].hp)>=m[n].at){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}