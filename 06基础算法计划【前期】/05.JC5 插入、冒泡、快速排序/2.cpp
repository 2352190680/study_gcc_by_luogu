#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
// bool cmp(string a,string b){
//     return a+b>b+a;
// }
// void p(int a[],int b,int c){
//     int j=b,k=c;int flag=a[(b+c)/2];
//     do{
//         while (a[j]<flag)j++;
//         while (a[k]>flag)k--;
//         if (j<=k){
//             swap(a[j],a[k]);j++;k--;
//         }
//     }while (j<=k);
//     if (b<k)p(a,b,k);
//     if (j<c)p(a,j,c);
// }
struct mou{
    int x,y,z;
};
bool cmp(mou a,mou b){
    return a.z<b.z;
}
int main(){
    // int n;cin>>n;string a[n+2];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // sort(a+1,a+n+1,cmp);
    // for (int i=1;i<=n;++i){
    //     cout<<a[i];
    // }

    // int n,m;cin>>n>>m;int a[n+1],b[n+1][3];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=m;++i){
    //     cin>>b[i][1]>>b[i][2];
    // }
    // for (int i=1;i<=m;++i){
    //     int c[6];memset(c,0,sizeof(c));
    //     for (int j=1;j<=n;++j){
    //         int d=pow(10,b[i][1]);
    //         if (a[j]%d==b[i][2]){
    //             c[j]=a[j];
    //         }
    //     }
    //     for (int j=1;j<=n;++j){
    //         for (int k=j+1;k<=n;++k){
    //             if (c[j]>c[k]){
    //                 int t=c[j];c[j]=c[k];c[k]=t;
    //             }
    //         }
    //     }
    //     bool p=false;
    //     for (int i=1;i<=n;++i){
    //         if (c[i]!=0){
    //             p=true;cout<<c[i]<<endl;break;
    //         }
    //     }
    //     if (p==false)cout<<-1<<endl;
    // }

    // int n,t;cin>>n>>t;int a[n+1];int sum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // sort(a+1,a+n+1);
    // for (int i=n;i>=1;--i){
    //     sum+=a[i];
    //     if (sum>=t){
    //         cout<<n-i+1;break;
    //     }
    // }

    // int n,t;cin>>n>>t;int a[n+1];int b=1,c=n;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // p(a,b,c);
    // cout<<a[t+1];

    double sum=0;int n;cin>>n;mou a[50001];
    for (int i=1;i<=n;++i){
        cin>>a[i].x>>a[i].y>>a[i].z;
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=n-1;++i){
        sum+=sqrt(pow(a[i].x-a[i+1].x,2)+pow(a[i].y-a[i+1].y,2)+pow(a[i].z-a[i+1].z,2));
    }
    cout<<fixed<<setprecision(3)<<sum;//无fixed时是有效数字，有的时候为小数位数
    return 0;
}