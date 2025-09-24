#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long n,q;bool a[100000001];int z[10000010];int zj=1;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>q;a[0]=a[1]=1;
    for (int i=2;i*i<=n;++i){
        if (a[i]==0){
            for (int j=i*2;j<=n;j+=i){
                a[j]=1;
            }
        }
    }
    for (int i=1;i<=n;++i){
        if (a[i]==0){
            z[zj++]=i;
        }
    }
    for (int i=1;i<=q;++i){
        int t;cin>>t;
        cout<<z[t]<<"\n";
    }
    return 0;
}