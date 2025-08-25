#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int n,m,k;cin>>n>>m>>k;int l[k+1];int nn=n;
    // for (int i=1;i<=k;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=k;++i){
    //     nn-=l[i];
    //     if (nn<0){cout<<i;return 0;}
    //     nn+=m;
    //     if (nn>n)nn=n;
    // }
    // cout<<"yes";

    // int n;cin>>n;int l[n+1];int min=10,max=0;int maxnum=0,minnum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=n;i>=1;--i){
    //     if (l[i]<=min){min=l[i];minnum=i;}
    // }
    // for (int i=1;i<=n;++i){
    //     if (l[i]>=max){max=l[i];maxnum=i;}
    // }
    // if (maxnum==n&&minnum==1){
    //     cout<<0;
    // }
    // else if (maxnum==n&&minnum!=1){
    //     cout<<minnum-1;
    // }
    // else if (minnum==1&&maxnum!=0){
    //     cout<<n-maxnum;
    // }
    // else{
    //     if (maxnum<minnum){
    //         cout<<n-maxnum+minnum-2;
    //     }else{
    //         cout<<n-maxnum+minnum-1;
    //     }
    // }

    // int n;cin>>n;int l[n];int quan[n+1];memset(quan,0,sizeof(quan));
    // for (int i=1;i<n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<n;++i){
    //     int bs=0;int a;if (i!=n-1){a=l[i]%(n-i+1);}else{a=l[i];}
    //     for (int j=1;j<=n;++j){
    //         if (quan[j]!=1){
    //             bs++;
    //             if (bs==a){
    //                 quan[j]=1;
    //                 break;
    //             }
    //         }
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     if (quan[i]==0)cout<<i;
    // }

    int n;double m;cin>>n>>m;int l[n+1];
    for (int i=1;i<=n;++i){
        cin>>l[n+1];
        if (l[n+1]==1){
            int a;cin>>a;m+=a;printf("%.2lf\n",m);
        }
        else if (l[n+1]==2){
            double a,b;cin>>a>>b;m=m*(a/b);printf("%.2lf\n",m);
        }
    }

    return 0;
}