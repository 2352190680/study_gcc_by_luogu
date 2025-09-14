//P9147 签到题
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long n;long long a[1000002];long long maxa=1;long long f[1000002],g[1000002];
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    if (n==1){
        cout<<1;return 0;
    }

    //O(n*2)复杂度
    // for (int i=1;i<=n;++i){
    //     long long sum=1;int t=a[i];
    //     if (i>1){
    //         a[i]=a[i-1]+1;
    //         for (int j=2;j<=n;++j){
    //             if (n-j+1<=maxa-sum){
    //                 break;
    //             }                
    //             if (a[j]>a[j-1]){
    //                 sum++;
    //                 if (j==n){
    //                     if (sum>=maxa){
    //                         maxa=sum;
    //                     }
    //                 }
    //             }
    //             else{
    //                 if (sum>=maxa){
    //                     maxa=sum;
    //                 }
    //                 sum=1;
    //             }
    //         }
    //     }
    //     sum=1;
    //     if (i<n){
    //         a[i]=a[i+1]-1;
    //         for (int j=2;j<=n;++j){
    //             if (n-j+1<=maxa-sum){
    //                 break;
    //             }
    //             if (a[j]>a[j-1]){
    //                 sum++;
    //                 if (j==n){
    //                     if (sum>=maxa){
    //                         maxa=sum;
    //                     }
    //                 }
    //             }
    //             else{
    //                 if (sum>=maxa){
    //                     maxa=sum;
    //                 }
    //                 sum=1;
    //             }
    //         }
    //     }
    //     a[i]=t;
    // }

    //判断从2到n的桥梁连接两边，两边若刚好差2以上就可以实现两边之和+1，否则大的一边+1；
    for (int i=1;i<=n;++i){
        if (a[i]>a[i-1]){
            f[i]=f[i-1]+1;
        }
        else{
            f[i]=1;
        }
    }
    for (int i=n;i>=1;--i){
        if (a[i]<a[i+1]){
            g[i]=g[i+1]+1;
        }
        else{
            g[i]=1;
        }
    }
    for (int i=1;i<=n;++i){
        if (a[i+1]-a[i-1]>=2){
            maxa=max(f[i-1]+g[i+1]+1,maxa);
        }else{
            maxa=max(max(f[i-1]+1,g[i+1]+1),maxa);
        }
    }
    cout<<maxa;
    return 0;
}