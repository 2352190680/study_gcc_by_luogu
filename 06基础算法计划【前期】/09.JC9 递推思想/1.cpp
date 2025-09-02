#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // int a,b;cin>>a>>b;int l[a+1][b+1][3];;memset(l,0,sizeof(l));
    // int n;cin>>n;int g[n+1][3];
    // for (int i=1;i<=n;++i){
    //     cin>>g[i][1]>>g[i][2];l[g[i][1]][g[i][2]][2]=1;
    // }
    // for (int i=1;i<=b;++i){
    //     l[1][i][1]=1;
    // }
    // for (int i=1;i<=a;++i){
    //     l[i][1][1]=1;
    // }
    // for (int i=2;i<=a;++i){
    //     for (int j=2;j<=b;++j){
    //         if (l[i][j][2]==0){
    //             l[i][j][1]=l[i-1][j][1]+l[i][j-1][1];
    //         }
    //     }
    // }
    // cout<<l[a][b][1];

    // int n;cin>>n;
    // int a[n+1];memset(a,0,sizeof(a));a[1]=1;
    // for (int i=2;i<=n;++i){
    //     for (int j=1;j<=i/2;++j){
    //         a[i]+=a[j];
    //     }
    //     a[i]++;
    // }
    // cout<<a[n];

    // int n,k;cin>>n>>k;int a[n+1];memset(a,0,sizeof(a));a[1]=1;a[0]=1;int b=2;
    // while (b<=k){
    //     for (int i=0;i<b;++i){
    //         a[b]+=a[i];
    //         a[b]%=100003;
    //     }
    //     b++;
    // }
    // if (n<=k){
    //     cout<<a[n];
    // }
    // else{
    //     for (int i=k+1;i<=n;++i){
    //         for (int j=i-k;j<i;++j){
    //             a[i]+=a[j];
    //             a[i]%=100003;
    //         }
    //     }
    //     cout<<a[n];
    // }

    int n;cin>>n;int a[n+1];memset(a,0,sizeof(a));
    a[0]=0,a[1]=1;
    for (int i=2;i<=n;++i){
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n];
    

    return 0;
}