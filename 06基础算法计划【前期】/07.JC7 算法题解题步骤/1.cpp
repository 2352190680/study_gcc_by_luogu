#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    // int n;cin>>n;int a[n+1];int x;int sum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>x>>a[i];
    // }
    // sort(a+1,a+n+1);
    // if (n%2==1)x=a[(1+n)/2];
    // else x=(a[n/2]+a[n/2+1])/2;
    // for (int i=1;i<=n;++i){
    //     sum+=abs(a[i]-x);
    // }
    // cout<<sum;

    // int n,t;cin>>n>>t;int a[n+1];int sum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // int l[a[n]+t];memset(l,0,sizeof(l));
    // for (int i=1;i<=n;++i){
    //     for (int j=a[i];j<=a[i]+t-1;++j){
    //         l[j]=1;
    //     }
    // }
    // for (int i=1;i<=a[n]+t-1;++i){
    //     if (l[i]==1)sum++;
    // }
    // cout<<sum;

    // int n;cin>>n;int a[n+1][5];int sum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i][1]>>a[i][2]>>a[i][3];
    //     if (a[i][1]==0)a[i][4]=1;
    //     else a[i][4]=0;
    // }
    // sum+=a[1][2];
    // for (int i=2;i<=n;++i){
    //     if (a[i][1]==0){
    //         sum+=a[i][2];
    //     }
    //     if (a[i][1]==1){
    //         bool p=true;
    //         for (int j=max(1,i-45);j<i;++j){
    //             if (a[j][1]==0&&a[j][4]==1&&a[i][3]-a[j][3]<=45&&a[i][2]<=a[j][2]){
    //                 a[j][4]=0;p=false;break;
    //             }
    //         }
    //         if (p==true)sum+=a[i][2];
    //     }
    // }
    // cout<<sum;

    // int a,b;cin>>a>>b;int l[a+b+1],c[b+1][4];
    // for (int i=1;i<=a;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=b;++i){
    //     cin>>c[i][1];
    //     if (c[i][1]==1){
    //         cin>>c[i][2]>>c[i][3];
    //     }else{
    //         cin>>c[i][2];
    //     }
    // }
    // for (int i=1;i<=b;++i){
    //     if (c[i][1]==1){
    //         for (int j=a;j>=c[i][2]+1;--j){
    //             l[j+1]=l[j];
    //         }
    //         l[c[i][2]+1]=c[i][3];a++;
    //     }else{
    //         for (int j=c[i][2];j<=a-1;++j){
    //             l[j]=l[j+1];a--;
    //         }
    //     }
    //     for (int j=1;j<=a;++j){
    //         cout<<l[j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n,x;cin>>n>>x;int a[n+1];int sum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    //     if (a[i]>x){
    //         sum+=a[i]-x;a[i]=x;
    //     }
    // }
    // for (int i=1;i<=n-1;++i){
    //     if (a[i]+a[i+1]<=x)continue;
    //     else{
    //         sum+=-x+a[i]+a[i+1];
    //         a[i+1]=x-a[i];
    //     }
    // }
    // cout<<sum;

    int n,a;cin>>n>>a;int l[n+1];
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    for (int i=1;i<=n;++i){
        int t[601];memset(t,0,sizeof(t));
        for (int j=1;j<=i;++j){
            t[l[j]]++;
        }
        int sum=0;
        for (int j=600;j>=0;j--){
            sum+=t[j];
            if (sum>=max(1,i*a/100)){
                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}