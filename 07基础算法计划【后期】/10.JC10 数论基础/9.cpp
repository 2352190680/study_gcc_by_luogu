#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int a[64],b[64],c[64];int n,m;
int main(){
    cin>>n;bool p1=true,p2=true;
    for (int i=1;i<=n;++i){
        int x;cin>>x;a[x]++;
    }
    cin>>m;
    for (int i=1;i<=m;++i){
        int x;cin>>x;b[x]+=2;
    }
    cout<<n<<endl;
    for (int i=0;i<=63;++i){
        c[i]=a[i]+b[i];
        if (c[i]==3){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    for (int i=0;i<=63;++i){
        if (c[i]!=0){
            cout<<i<<" ";
        }
        if (c[i]!=3&&c[i]!=0){
            p1=false;
        }
    }
    cout<<endl;
    for (int i=0;i<=63;++i){
        if (c[i]!=1&&c[i]!=3){
            cout<<i<<" ";
        }
        if (c[i]==1){p2=false;}
    }
    cout<<endl;
    if (p1==true)cout<<1;
    else cout<<0;
    cout<<endl;
    if (p2==true)cout<<1;
    else cout<<0;
    cout<<endl;
    if (c[0]==1||c[0]==3){
        cout<<1;
    }
    else cout<<0;
    return 0;
}