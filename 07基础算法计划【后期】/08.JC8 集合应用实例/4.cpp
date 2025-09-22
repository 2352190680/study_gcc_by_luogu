#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int a[64],b[64];
int main(){
    int x;cin>>x;
    for (int i=1;i<=x;++i){
        int q;cin>>q;
        a[q]++;b[q]++;
    }
    int y;cin>>y;
    for (int i=1;i<=y;++i){
        int q;cin>>q;
        a[q]++;b[q]++;
    }
    cout<<x<<endl;
    for (int i=0;i<64;++i){
        if (b[i]==2)cout<<i<<" ";
    }
    cout<<endl;
    for (int i=0;i<64;++i){
        if (a[i]!=0)cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}